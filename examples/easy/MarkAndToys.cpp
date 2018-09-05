/*
	Statements: https://www.hackerrank.com/challenges/mark-and-toys/problem
*/

#include <common.h>

int maximumToys(vector<int> prices, int k)
{
	multiset<int> p(prices.begin(), prices.end());
	int count = 0;
	int total = 0;
	for(auto pp: p)
	{
		total += pp;
		if (total <= k)
		{
			count++;
		} else {
			break;
		}
	}
	return count;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << maximumToys(parseVector<int>(cin, n), k) << endl;
	return 0;
}
