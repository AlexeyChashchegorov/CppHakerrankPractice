#include <common.h>

string twoArrays(int k, vector<int> A, vector<int> B)
{
    multiset<int> a(A.begin(), A.end());
    multiset<int> b(B.begin(), B.end());
    auto ita = a.rbegin();
    auto itb = b.begin();
    for(; ita != a.rend() && itb != b.end(); ita++, itb++)
    {
        if ((*ita + *itb) < k)
            return "NO";
    }
    return "YES";
}

int main()
{
	int q;
	cin >> q;
	while(q--)
	{
		int s, k;
		cin >> s >> k;
		cout << twoArrays(k, parseVector<int>(cin, s), parseVector<int>(cin, s)) << endl;
	}
	return 0;
}
