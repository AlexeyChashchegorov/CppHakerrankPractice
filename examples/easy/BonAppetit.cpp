/*
	Statements: https://www.hackerrank.com/challenges/bon-appetit/problem
*/

#include <common.h>

void bonAppetit(vector<int> bill, int k, int b)
{
    auto total = accumulate(bill.begin(), bill.end(), 0);
    auto shared = (total - bill[k]) / 2;
    if (shared == b)
        cout << "Bon Appetit" << endl;
    else
        cout << ( b - shared ) << endl;
}

int main()
{
	auto n = parse<int>(cin);
	auto k = parse<int>(cin);
	auto bill = parseVector<int>(cin, n);    
	bonAppetit(bill, k, parse<int>(cin));
	return 0;
}
