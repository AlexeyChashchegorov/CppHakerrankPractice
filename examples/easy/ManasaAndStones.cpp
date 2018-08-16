/*
	Statements: https://www.hackerrank.com/challenges/manasa-and-stones/problem
*/

#include <common.h>

vector<int> stones(int n, int a, int b) 
{
	auto cur = (n-1) * a;
	set<int> ret = {cur};
	for(int i=0; i<(n-1);i++)
		ret.insert(cur-=a-b);
	return vector<int>(ret.begin(), ret.end());
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		for(auto r: stones(parse<int>(cin), parse<int>(cin), parse<int>(cin)))
			cout << r << " ";
		cout << endl;
	}
	return 0;
}

