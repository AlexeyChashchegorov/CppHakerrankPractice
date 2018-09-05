/*
	Stataments:
*/

#include <common.h>

vector<int> largestPermutation(int k, vector<int> arr)
{
	vector<int> pos(arr.size()+1);

	for (int i = 0; i < arr.size(); ++i)
		pos[arr[i]] = i;

	for (int i=0; i<arr.size() && k; ++i)
	{
		if (arr[i] == arr.size()-i)
			continue;
		int temp = pos[arr.size()-i];
		pos[arr[i]] = pos[arr.size()-i];
		pos[arr.size()-i] = i;
		swap(arr[temp], arr[i]);
		--k;
	}
	return arr;
}

int main()
{
	int n,k;
	cin >> n >> k;

	for (auto r: largestPermutation(k, parseVector<int>(cin,n)))
		cout << r << " ";
	cout << endl;

	return 0;
}
