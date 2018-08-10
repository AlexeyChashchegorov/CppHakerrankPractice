/*
	Statements: https://www.hackerrank.com/challenges/chocolate-feast/problem
*/

#include <common.h>

int chocolateFeast(int n, int c, int m) {
    int eaten_bars = n / c;
    int wrappers_count = eaten_bars;
    while(wrappers_count >= m)
    {
        int bars_income = wrappers_count / m;
        wrappers_count = wrappers_count % m;
        wrappers_count += bars_income;
        eaten_bars += bars_income;
    }
    return eaten_bars;
}

int main()
{
	int t;
	cin >> t;

    	while (t--)
        	cout << chocolateFeast(parse<int>(cin), parse<int>(cin), parse<int>(cin)) << endl;

    return 0;
}
