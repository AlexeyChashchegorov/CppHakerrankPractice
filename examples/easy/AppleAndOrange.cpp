/*
	Statements:https://www.hackerrank.com/challenges/apple-and-orange/problem
*/

#include <common.h>

list<int> absPoints(const vector<int>& v, int p)
{
    list<int> ret;
    for(const auto& vv: v)
        ret.push_back(p+vv);
    return ret;
}

int countInRange(const list<int>& v, const pair<int,int>& from_to)
{
    return count_if(v.begin(), v.end(), 
        [&from_to](int vv){return (vv >= from_to.first) && (vv <= from_to.second);});   
}

void countApplesAndOranges(int s, int t, int a, int b, const vector<int>& apples, const vector<int>& oranges) 
{
    auto from_to = make_pair(s,t);
    cout << countInRange(absPoints(apples, a), from_to) << endl;
    cout << countInRange(absPoints(oranges, b), from_to) << endl;
}

int main()
{
	int s, t, a, b, m, n;
	cin >> s >> t >> a >> b >> m >> n;
	vector<int> apples(m);
	while (m >0)
		cin >> apples[--m];
	vector<int> oranges(n);
	while (n >0)
		cin >> oranges[--n];
    
	countApplesAndOranges(s, t, a, b, apples, oranges);

    	return 0;
}
