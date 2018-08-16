/*
	Statements: https://www.hackerrank.com/challenges/happy-ladybugs/problem
*/

#include <common.h>

string happyLadybugs(string b) 
{
	bool complete = true;
	for(int i=0;i<b.length();i++)
	{
		if (b[i]=='_')
			continue;
		auto prev = (i==0) ? i+1 : i-1;
		auto next = (i==b.length()-1) ? i-1 : i+1;
		complete = b[prev] == b[i] || b[next] == b[i];
		if (!complete)
			break;
	}
	if (complete)
		return "YES";
	unordered_map<char, int> s;
	for(auto c: b)
		s[c]++;
	auto cnt_unique = count_if(s.begin(), s.end(), 
		[](pair<char,int> v){return (v.second == 1) && (v.first != '_');});
	auto cnt_gaps = count_if(s.begin(), s.end(), 
		[](pair<char,int> v){return v.first == '_';});
	return ((cnt_unique == 0) && (cnt_gaps != 0)) ? "YES" : "NO";
}

int main()
{
	int g;
	cin >> g;
	while(g--)
	{
		parse<int>(cin);
		cout << happyLadybugs(parse<string>(cin)) << endl;
	}
	return 0;
}

