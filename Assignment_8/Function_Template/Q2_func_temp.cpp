#include<iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int size)
{
	T min = arr[0];
	for(int i = 1; i < size; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int arr[] = {4, 5, 1, 6, 9};
	int size = 5;
	
	int f = findMin(arr, size);
	cout << "Minimum element = " << f << endl;
	return 0;
}
