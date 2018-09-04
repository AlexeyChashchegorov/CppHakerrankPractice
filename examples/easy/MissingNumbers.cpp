/*
	Statements: https://www.hackerrank.com/challenges/missing-numbers/problem
*/

#include <common.h>

// Complete the missingNumbers function below.
vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
	unordered_map<int,int> diffs;
	for(auto b: brr)
		diffs[b]++;
	for(auto a: arr)
		diffs[a]--;
	set<int> ret;
	for(auto d: diffs)
	{
		if(d.second > 0)
			ret.insert(d.first);
	}
	return vector<int>(ret.begin(), ret.end());
}

int main()
{
	for(auto r : missingNumbers(parseVector<int>(cin), parseVector<int>(cin)))
		cout << r << " ";
	cout << endl;
	return 0;
}
