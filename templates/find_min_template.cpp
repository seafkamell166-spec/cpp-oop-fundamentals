#include <iostream>
#include<string>
using namespace std;
template <class T>
   T getmin(T arr[], int size)
{
	T min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
int main()
{
	string  arr[] = { "one", "two", "three", "four", "five" };
    int size = 5;
	
	cout<<"Minimum element in the array is: " << getmin(arr, size) << endl;
	return 0;
}

