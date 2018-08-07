/*
	Statemenst: https://www.hackerrank.com/challenges/electronics-shop/problem
*/

#include <common.h>

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
	set<int> kbs(keyboards.begin(), keyboards.end());
	set<int> dvs(drives.begin(), drives.end());
	int most = -1;

	set<int>& first = (kbs.size() > dvs.size()) ? kbs : dvs;
	set<int>& second = (kbs.size() <= dvs.size()) ? kbs : dvs;

	for(const auto& f: first)
	{
		auto rest_money = b - f;
		if (rest_money < 0)
			continue;
		auto it = second.lower_bound(rest_money);
		if (it ==  second.begin() && *it > rest_money)
			continue;
		if (it != second.end() && *it == rest_money)
		{
			most = b;
			break;
		}
		most = max(f + *(--it), most);
	}
	return most;
}

int main()
{
	int b, n, m;
	cin >> b >> n >> m;
	cout << getMoneySpent(parseVector<int>(cin, n), parseVector<int>(cin, m), b) << endl;
	return 0;
}
