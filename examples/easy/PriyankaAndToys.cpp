/*
	Statement: https://www.hackerrank.com/challenges/priyanka-and-toys/problem
*/

#include <common.h>

int toys(vector<int> w)
{
	set<int> wt(w.begin(), w.end());
	int ret = 0;
	for(auto it = wt.begin(); it != wt.end(); 
		it = upper_bound(it, wt.end(), *it + 4))
		ret++;
	return ret;
}

int main()
{
	cout << toys(parseVector<int>(cin)) << endl;
	return 0;
}
