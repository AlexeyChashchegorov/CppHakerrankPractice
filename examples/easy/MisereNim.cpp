/*
	Statements: https://www.hackerrank.com/challenges/misere-nim-1/problem
*/

#include <common.h>

string misereNim(vector<int> s) {
	
	int ret = 0;
	int c = 0;
	for(int i = 0; i< s.size();i++)
	{
		ret ^= s[i];
		c += (s[i]==1) ? 1 : 0;
	}
	if ((c != s.size() && ret == 0) || (c == s.size() && ((c % 2) != 0)))
			return "Second";
	return "First";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
		cout << misereNim(parseVector<int>(cin)) << endl;
	return 0;
}

