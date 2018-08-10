/*
	Statements: https://www.hackerrank.com/challenges/beautiful-triplets/problem
*/

#include <common.h>

int beautifulTriplets(int d, vector<int> arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    return count_if(s.begin(), s.end(), 
        [&s,&d](int ss) {
            return (s.find(ss) != s.end()) && 
                (s.find(ss+d) != s.end()) &&
                (s.find(ss+2*d) != s.end());
        });
}

int main()
{
	int n, d;
	cin >> n >> d;
    	cout << beautifulTriplets(d, parseVector<int>(cin, n)) << endl;
    	return 0;
}
