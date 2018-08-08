/*
	Statements: https://www.hackerrank.com/challenges/angry-professor/problem
*/

#include <common.h>

string angryProfessor(int k, vector<int> a) 
{
    return (count_if(a.begin(), a.end(), 
        [](int t){return t > 0;}) > (a.size() - k)) ? "YES" : "NO";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
        	cout << angryProfessor(k, parseVector<int>(cin, n)) << endl;
	}
	return 0;
}
