/*
	Statements: https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <common.h>

int getTotalX(vector<int> a, vector<int> b)
{
	int factor = 0;
	int max_a = *max_element(a.begin(), a.end());
	int min_b = *min_element(b.begin(), b.end());
   
	for(int i = 1; i <= min_b/max_a ;++i )
	{
		int sum = 0;
		for (auto aa: a)
			sum += (i*max_a) % aa;
		for(auto bb: b)
			sum += bb % (i*max_a);

		factor += (sum == 0) ? 1 : 0;
   }
     
    return factor;

}

int main()
{
	int n, m;
	cin >> n >> m ;

	cout << getTotalX(parseVector<int>(cin, n), parseVector<int>(cin, m)) << endl;
	return 0;
}
