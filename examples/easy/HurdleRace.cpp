/*
	Statements: https://www.hackerrank.com/challenges/the-hurdle-race/problem
*/

#include <common.h>

int hurdleRace(int k, vector<int> height) 
{
    int p = 0;
    for(const auto& h: height)
        p = max(p, h-k);
    return p;
}

int main()
{
	int n, k;
	cin >> n >> k;
    	cout << hurdleRace(k, parseVector<int>(cin, n)) << endl;
	return 0;
}
