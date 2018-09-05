/*
	Statements: https://www.hackerrank.com/challenges/flipping-bits/problem
*/

#include <common.h>

unsigned flippingBits(unsigned n)
{
	return n ^ 0xFFFFFFFF;
}

int main()
{
	int q;
	cin >> q;
	while (q--)
		cout << flippingBits(parse<int>(cin)) << endl;
	return 0;
}
