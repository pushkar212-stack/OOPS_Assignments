#include <iostream>
int x = 10;

class Test
{
	public:
	    static int y;
	    void show();
};

void Test::show()
{
    int x = 5;
	std::cout << "Local x = " << x << std::endl;
    std::cout << "Global x = " << ::x << std::endl;   // (b)
    std::cout << "Static y = " << Test::y << std::endl; // (c)
}

int Test::y = 20;

int main()
{
    Test t;
    t.show();

    std::cout << "Using std::cout and std::endl" << std::endl;

    return 0;
}

