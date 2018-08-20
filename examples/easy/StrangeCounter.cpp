/*
	Statements: https://www.hackerrank.com/challenges/strange-code/problem
*/

#include <common.h>

long strangeCounter(long t) 
{
    long t2 = (t-1) / 3;
    long group_number = floor(log2(t2+1));
    long prev_groups_size = 3*(1-pow(2,group_number)) / (-1);
    long group_leader = pow(2,group_number)*3;
    return group_leader + prev_groups_size - t + 1;
}

int main()
{
    cout << strangeCounter(parse<int>(cin)) << endl;
    return 0;
}

