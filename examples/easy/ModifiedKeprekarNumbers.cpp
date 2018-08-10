/*
	Statements: https://www.hackerrank.com/challenges/kaprekar-numbers/problem
*/
#include <common.h>

void kaprekarNumbers(long p, long q) 
{
    bool found = false;
    for(long i=p; i<=q; i++)
    {
        long s = i*i;
        string str = to_string(s);
        long d = ((str.length()%2)==0) ? str.length() / 2 : str.length() / 2 + 1;
        long a = atol(str.substr(0,str.length()-d).c_str());
        long b = atol(str.substr(str.length()-d,d).c_str());
        if ((a + b) == i)
        {
            cout << i << " ";
            found = true;
        }
    }
    if (!found)
        cout << "INVALID RANGE";
    cout << endl;
}

int main()
{
    kaprekarNumbers(parse<long>(cin), parse<long>(cin));
    return 0;
}

