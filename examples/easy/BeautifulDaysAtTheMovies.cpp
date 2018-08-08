/*
	Statements: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
*/

#include <common.h>

int beautifulDays(int i, int j, int k) 
{
    int ret = 0;
    for(int c=i; c<=j; c++)
    {
        auto s = to_string(c);
        reverse(s.begin(), s.end());
        auto r = atoi(s.c_str());
        ret += (abs(r - c) % k == 0) ? 1 : 0;   
    }
    return ret;
}

int main()
{
    cout << beautifulDays(parse<int>(cin), parse<int>(cin), parse<int>(cin)) << endl;
    return 0;
}
