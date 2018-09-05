/*
	Statements: https://www.hackerrank.com/challenges/nimble-game-1/problem
*/

#include <common.h>

string nimbleGame(vector<int> s) {
	int b = 0;
	for (int i = 0 ; i < s.size(); i++)
	{
		if (s[i] > 0)
			b ^= (s[i] % 2 == 0) ? 0 : i;
	}
	return  (b == 0) ? "Second" : "First";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
		cout << nimbleGame(parseVector<int>(cin)) << endl;
	return 0;
}
