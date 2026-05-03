#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key)
{
    for (int i = 0; i < size; i++)
	{
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 4;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
