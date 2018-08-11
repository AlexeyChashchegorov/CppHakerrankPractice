/*
	Statements: https://www.hackerrank.com/challenges/flatland-space-stations/problem
*/
#include <common.h>

int flatlandSpaceStations(int n, vector<int> c) 
{
	set<int> sc(c.begin(), c.end());
	int prev=*sc.begin();
	int m = *sc.begin();
	for(auto it=++sc.begin();it!=sc.end();it++)
	{
		m = max(m, (*it - prev)/2);
		prev = *it;
	}
	return max(m, n - *(--sc.end()) - 1);
}

int main()
{
	cout << flatlandSpaceStations(parse<int>(cin), parseVector<int>(cin)) << endl;
	return 0;
}
