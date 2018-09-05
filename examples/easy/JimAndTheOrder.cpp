/*
	Statements: https://www.hackerrank.com/challenges/jim-and-the-orders/problem
*/

#include <common.h>

vector<int> jimOrders(vector<vector<int>> orders)
{
	multimap<int,int> order_fans;
	for(int i=0;i<orders.size();i++)
		order_fans.emplace(orders[i][0]+orders[i][1], i);
	vector<int> ret;
	for(auto of: order_fans)
		ret.push_back(of.second+1);
	return ret;
}

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> orders(n);
	for (int i = 0; i < n; i++) {
		orders[i].resize(2);
		cin >> orders[i][0] >> orders[i][1];
	}

	for (auto r: jimOrders(orders))
		cout << r << " ";
	cout << endl;
	return 0;
}

