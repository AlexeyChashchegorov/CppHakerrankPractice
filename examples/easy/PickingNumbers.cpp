/*
	Statements: https://www.hackerrank.com/challenges/picking-numbers/problem
*/

#include <common.h>

int pickingNumbers(vector<int> a) 
{    
    auto freq = spector<vector<int>, map<int,int>>(a);
    auto prev = freq.begin();
    int m = prev->second;
    for(auto f = ++freq.begin(); f != freq.end();  f++)
    {
        m = max(f->second, m);
        if (abs(f->first-prev->first) <= 1)
            m = max(f->second + prev->second, m);
        prev = f;
    }
    return m;
}

int main()
{
    cout << pickingNumbers(parseVector<int>(cin)) << endl;
    return 0;
}
