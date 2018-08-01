/* 
	Statements: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
*/

#include <common.h>

vector<int> breakingRecords(vector<int> scores)
{
    if (scores.empty())
        return {0,0};
    auto min_score = scores[0];
    auto max_score = scores[0];
    vector<int> ret(2,0);
    for (int i=1; i<scores.size(); i++)
    {
        ret[1] += (min_score > scores[i]) ? 1 : 0;
        min_score = min(min_score, scores[i]);
        ret[0] += (max_score < scores[i]) ? 1 : 0;
        max_score = max(max_score, scores[i]);        
    }
    return ret;
}

int main()
{
    	for (auto r: breakingRecords(parse<int>(cin)))
        	cout << r << " ";
	cout << endl;
	return 0;
}
