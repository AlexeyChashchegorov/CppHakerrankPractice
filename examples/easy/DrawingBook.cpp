/*
	Statements:
*/

#include <common.h>

int pageCount(int n, int p)
{
    int front_distance = p / 2;
    int back_distance = (n-p+((n+1)%2)) / 2;
    return min(front_distance, back_distance);
}

int main()
{
    cout << pageCount(parse<int>(cin), parse<int>(cin))<< "\n";
    return 0;
}

