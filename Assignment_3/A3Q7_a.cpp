#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void setData(int n)
    {
        num = n;
    }

    void display()
    {
        cout << "Number = " << num << endl;
    }

    Number increment(Number obj)
    {
        obj.num = obj.num + 10;
        return obj;
    }
};

int main()
{
    Number n1, n2;

    n1.setData(5);

    cout << "Before increment:" << endl;
    n1.display();

    n2 = n1.increment(n1);

    cout << "\nAfter increment:" << endl;
    n2.display();

    return 0;
}

