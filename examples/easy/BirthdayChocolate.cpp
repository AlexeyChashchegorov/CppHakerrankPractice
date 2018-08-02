/*
	Statements: https://www.hackerrank.com/challenges/the-birthday-bar/problem
*/

#include <common.h>

int solve(vector<int> s, int d, int m) 
{
    int sum, ret = 0;
    for(int i=0; i<s.size(); i++)
    {
        if (i == 0)
            sum = accumulate(&s[0], &s[min(m, int(s.size()))], 0);
        else
            sum = sum - s[i-1] + (((i+m-1)<s.size()) ? s[i+m-1] : 0);
        if (sum == d)
            ret++;
    }
    return ret;

}

int main()
{
    cout << solve(parseVector<int>(cin), parse<int>(cin), parse<int>(cin)) << endl;
    return 0;
}
