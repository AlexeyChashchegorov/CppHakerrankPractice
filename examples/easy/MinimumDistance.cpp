/*
	Statements: https://www.hackerrank.com/challenges/minimum-distances/problem
*/

#include <common.h>

int minimumDistances(vector<int> a) 
{
    auto val2idx = spector_positions<vector<int>, unordered_map<int, set<int>>>(a);
    int m = numeric_limits<int>::max();
    bool found = false;
    for(auto v2p: val2idx)
    {
        auto& idxs = v2p.second;
        if (idxs.size() <= 1)
            continue;
        found = true;
        set<int> diffs;
        for(auto it = ++idxs.begin(); it != idxs.end(); it++)
        {
            auto it_prev = it;
            it_prev--;
            diffs.insert(*it - *it_prev);
        }
        m = min(m, *diffs.begin());
    }
    return found ? m : -1;
}

int main()
{
    cout << minimumDistances(parseVector<int>(cin)) << endl;
    return 0;
}
