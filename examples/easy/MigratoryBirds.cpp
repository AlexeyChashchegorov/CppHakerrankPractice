/*
	Statements: https://www.hackerrank.com/challenges/migratory-birds/problem
*/

#include <common.h>

int migratoryBirds(vector<int> arr)
{
    unordered_map<int,int> freq;
    for(auto a:arr)
        freq[a]++;
    int m = -1;
    int r = freq.begin()->first;
    for(auto f:freq)
    {
        m = max(m, f.second);
        if ((m == f.second) && 
            ( (freq[r] != m) || ( (freq[r] == m) && (r > f.first) )))
        {
            r = f.first;
        }
    }
    return r;
}

int main()
{
    cout << migratoryBirds(parseVector<int>(cin)) << endl;
    return 0;
}
