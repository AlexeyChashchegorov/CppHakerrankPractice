/*
	Statements: https://www.hackerrank.com/challenges/utopian-tree/problem
*/

#include <common.h>

int utopianTree(int n) 
{
    int h=1;
    for(int i=0;i<n;i++)
        h += ( i % 2 == 1) ? 1 : h;
    return h;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		cout << utopianTree(parse<int>(cin)) << endl;
	}
	return 0;
}
