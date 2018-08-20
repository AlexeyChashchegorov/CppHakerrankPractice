/*
	Statements: https://www.hackerrank.com/challenges/insertionsort1/problem
*/

#include <common.h>

void insertionSort1(vector<int> arr) {
	auto to_add = *(--arr.end());
	for(int i=arr.size()-1;i>=0;i--)
	{
		bool found = i==0 || arr[i-1] < to_add;
		if (i!=0 && arr[i-1] >= to_add)
			arr[i] = arr[i-1];
		if(found)
			arr[i] = to_add;
		for(auto a: arr)
			cout << a << " ";
		cout << endl;
		if(found)
			return;
	}		
}

int main()
{
	insertionSort1(parseVector<int>(cin));
	return 0;
}
