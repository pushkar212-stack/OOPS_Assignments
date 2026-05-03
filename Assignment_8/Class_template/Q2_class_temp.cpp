#include <iostream>
using namespace std;

template <typename T>
class Queue
{
    T arr[100];
    int front, rear;

	public:
	    Queue()
		{
	        front = 0;
	        rear = -1;
	    }
	
	    void enqueue(T x)
		{
	        if (rear == 99)
			{
	            cout << "Queue Overflow\n";
	            return;
	        }
	        arr[++rear] = x;
	    }
	
	    void dequeue()
		{
	        if (front > rear)
			{
	            cout << "Queue Underflow\n";
	            return;
	        }
	        cout << "Dequeued: " << arr[front++] << endl;
	    }
	
	    void display()
		{
	        for (int i = front; i <= rear; i++)
	            cout << arr[i] << " ";
	        cout << endl;
	    }
};

int main()
{
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
