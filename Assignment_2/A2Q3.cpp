#include <iostream>
using namespace std;

class Practice
{
	private:
		void function_private()
		{
			cout << "Got from private function!" << endl;
		}
	public:
		void function_public()
		{
			cout << "Public function is being called...." << endl;
			function_private();
		}
};

int main()
{
    Practice p;
    p.function_public();

    return 0;
}

