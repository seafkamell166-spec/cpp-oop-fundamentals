#include <iostream>
#include<string>
using namespace std;
template <class T>
   T getmin(T arr[], int size)
{
     for(int i = 0; i < size; i++)
     {
		 T min = arr[0];
		 for(int i =0; i < size; i++)
		 {
			 if(arr[i] < min)
			 {
				return min = arr[i];
			 }
		 }
	 }
     
}
int main()
{
	string  arr[] = { "one", "two", "three", "four", "five" };
    int size = 5;
	
	cout<<"Minimum element in the array is: " << getmin(arr, size) << endl;
	return 0;
}

