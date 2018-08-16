/*
	Statements: https://www.hackerrank.com/challenges/fair-rations/problem
*/

#include <common.h>

string fairRations(vector<int> B) 
{
    list<int> even_pos;
    for(int i=0;i<B.size();i++)
        if (B[i] % 2 == 1)
            even_pos.push_back(i);
    if (even_pos.size() % 2 != 0)
        return "NO";
    int ret = 0;
    for(auto it=even_pos.begin();it!=even_pos.end();++(++it))
        ret += 2*(*(++it) - *(--it));
    return to_string(ret);
}

int main()
{
    cout << fairRations(parseVector<int>(cin)) << endl;
    return 0;
}
