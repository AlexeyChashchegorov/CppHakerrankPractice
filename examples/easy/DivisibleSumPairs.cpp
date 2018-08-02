/*
	Statements: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
*/

#include <common.h>

int divisibleSumPairs(int n, int k, vector<int> ar) 
{
	auto freq = spector<vector<int>, unordered_map<int,int>>(ar);
	int ret=0;
	for(auto a=freq.begin(); a != freq.end(); a++)
	{
		// Considering of array element with same values
		if ( (((a->first)*2) % k == 0) && (a->second != 1))
			ret += (a->second + 1) * a->second / 2 - a->second;
        
		// Consider different element with different values
		auto it = a;
		for(++it; it != freq.end(); it++)
		if ((a->first+it->first) % k == 0)
			ret += a->second * it->second;
	}
	return ret;
}

int main()
{
	auto n = parse<int>(cin);
	auto k = parse<int>(cin); 
	cout << divisibleSumPairs(n, k, parseVector<int>(cin, n)) << endl;
	return 0;
}
