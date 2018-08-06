/*
	Statements: https://www.hackerrank.com/challenges/sock-merchant/problem
*/

#include <common.h>

int sockMerchant(vector<int> ar)
{
    auto socks = spector<vector<int>, unordered_map<int,int>>(ar);
    int ret=0;
    for(const auto& s: socks)
        ret += s.second / 2;
    return ret;
}

int main()
{
    cout << sockMerchant(parseVector<int>(cin)) << endl;
    return 0;
}
