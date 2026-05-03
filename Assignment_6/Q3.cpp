#include <iostream>
using namespace std;

class Account
{
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;

    // For history
	string history[50];
	int hCount;

    static long nextTransactionID;

public:
    Account(long accNo, double bal) : accountNumber(accNo)
    {
        this->balance = bal;
        this->transactionID = 0;
        this->transactionType = " ";
        this->hCount = 0;
    }

    long depositAmount(const long to, const long from, const double amount)
    {
        if (accountNumber == from && balance >= amount)
        {
            balance -= amount;
            transactionType = "Debit";
            transactionID = ++nextTransactionID;

            history[hCount++] = "Debited " + to_string(amount) + " to account " + to_string(to);

            return transactionID;
        }
        return -1;
    }

    long creditAmount(const long to, const long from, const double amount)
    {
        if (accountNumber == to)
        {
            balance += amount;
            transactionType = "Credit";
            transactionID = ++nextTransactionID;

            history[hCount++] = "Credited " + to_string(amount) + " from account " + to_string(from);

            return transactionID;
        }
        return -1;
    }

    void displayDetails() const
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction History:\n";

        for (int i = 0; i < hCount; i++)
        {
            cout << "- " << history[i] << endl;
        }
    }
};

long Account::nextTransactionID = 1000;

int main()
{
    Account acc1(101, 2500);
    Account acc2(102, 8000);
    Account acc3(103, 500);
    Account acc4(104, 7800);
    Account acc5(105, 10000);

    long tid;

    // Transfering 500 from acc1 to acc2
    tid = acc1.depositAmount(102, 101, 500);
    if (tid != -1)
        acc2.creditAmount(102, 101, 500);

    // Transfering 300 from acc3 to acc4
    tid = acc3.depositAmount(104, 103, 300);
    if (tid != -1)
        acc4.creditAmount(104, 103, 300);

    // Transfering 200 from acc5 to acc1
    tid = acc5.depositAmount(101, 105, 200);
    if (tid != -1)
        acc1.creditAmount(101, 105, 200);

    acc1.displayDetails();
    acc2.displayDetails();
    acc3.displayDetails();
    acc4.displayDetails();
    acc5.displayDetails();

    return 0;
}
