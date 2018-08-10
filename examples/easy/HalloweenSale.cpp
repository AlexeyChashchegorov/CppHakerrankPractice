/*
	Statements: https://www.hackerrank.com/challenges/halloween-sale/problem
*/

#include <common.h>

int howManyGames(int p, int d, int m, int s) {
    int money_left = s;
    int cur_price = p;
    int items_got = 0;
    while(money_left >= cur_price)
    {
        money_left -= cur_price;
        items_got++;
        cur_price = ((cur_price - d) > m) ? cur_price - d : m;
    }
    return items_got;
}

int main()
{
	int p, d, m ,s;
	cin >> p >> d >> m >> s;
	cout << howManyGames(p, d, m, s) << endl;
    	return 0;
}
