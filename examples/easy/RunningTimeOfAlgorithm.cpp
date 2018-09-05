/*
	Statements: https://www.hackerrank.com/challenges/runningtime/problem
*/

#include <common.h>

int runningTime(vector<int> arr) 
{
	int shift = 0;
	for(int i=1;i<arr.size();i++)
	{
		int value=arr[i];
		int hole=i;
		while(hole>0 && arr[hole-1]>value)
		{
			arr[hole]=arr[hole-1];
			hole--;
			shift++;
		}
		arr[hole]=value;
	}
	return shift;
}

int main()
{
	cout << runningTime(parseVector<int>(cin)) << endl;
	return 0;
}
