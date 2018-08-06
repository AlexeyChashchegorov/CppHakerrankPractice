/*
	Statements: https://www.hackerrank.com/challenges/counting-valleys/problem
*/

#include <common.h>

int countingValleys(int n, string s) 
{
	int level=0;
	int valeys_count=0;
	bool on_valey = false;
	for(int i=0;i<s.size();i++) {
		int prev_level = level;
		if (s[i] == 'U')
			level++;
		else
			level--;
		if (!on_valey && prev_level == 0 && level < prev_level)
			on_valey = true;
		if (on_valey && level == 0 && level > prev_level)
		{
			on_valey = false;
			valeys_count ++;
		}
	}
	return valeys_count;
}

int main()
{
	cout << countingValleys(parse<int>(cin), parse<string>(cin)) << endl;
	return 0;
}

