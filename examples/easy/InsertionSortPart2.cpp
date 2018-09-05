/*
	Statements: https://www.hackerrank.com/challenges/insertionsort2/problem
*/

#include <common.h>

void insertionSort2(vector<int> arr)
{
	 for(int k=0;k<arr.size()-1;k++)
	 {
		 for(int i=0;i<(k+1);i++)
		 {
			 if(arr[i] > arr[k+1])
				 swap(arr[k+1], arr[i]);
		 }
		 for(auto a: arr)
			cout << a << " ";
		 cout << endl;
	 }
}

int main()
{
	insertionSort2(parseVector<int>(cin));
	return 0;
}
