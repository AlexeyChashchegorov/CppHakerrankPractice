/*
	Statements: https://www.hackerrank.com/challenges/service-lane/problem
*/

#include <common.h>

vector<int> serviceLane(vector<int> lane_width, vector<pair<int,int>> cases) 
{
    vector<int> ret(cases.size());
    for(int t=0;t<cases.size();t++)
    {
        int start = cases[t].first;
        int end = cases[t].second;
        ret[t] = *min_element(lane_width.begin()+start, lane_width.begin()+end+1);
    }
    return ret;
}

int main()
{
	int n, t;
	cin >> n >> t;
	for (const auto& result : serviceLane(parseVector<int>(cin, n), parseVector<pair<int,int>>(cin, t)))
		cout << result << endl;
	return 0;
}
