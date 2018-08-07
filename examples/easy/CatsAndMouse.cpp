/*
	Statements: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
*/

#include <common.h>

string catAndMouse(int x, int y, int z)
{
    if (abs(x-z) < abs(y-z))
        return "Cat A";
    if (abs(x-z) > abs(y-z))
        return "Cat B";
    return "Mouse C";
}

int main()
{
    int q;
    cin >> q;
    while (q--)
        cout << catAndMouse(parse<int>(cin), parse<int>(cin), parse<int>(cin)) << endl;
    return 0;
}
