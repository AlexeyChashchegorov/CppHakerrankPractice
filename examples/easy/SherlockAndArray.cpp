/*
	Statements: https://www.hackerrank.com/challenges/sherlock-and-array/problem
*/

#include <common.h>

string balancedSums(vector<int> arr) {
	vector<int> sum_of_index(arr.size());
	int sum=0;
	for(int i=0;i<arr.size();i++)
		sum_of_index[i] = (sum+=arr[i]);
	for(int i=0;i<arr.size();i++)
	{
		auto l_idx = arr.size()-1;
		auto cur_sum = sum_of_index[i] - arr[i];
		auto rest_sum = sum_of_index[l_idx] - sum_of_index[i];
		if (cur_sum == rest_sum)
			return "YES";
		if (cur_sum > rest_sum)
			break;
	}
	return "NO";
}

int main()
{
	int count;
	cin >> count;

	while(count-- > 0)
		cout << balancedSums(parseVector<int>(cin)) << endl;
	return 0;
}
