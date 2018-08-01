#include <spector.hpp>
#include <vector>
#include <map>

using namespace std;

int main()
{
	vector<int> v = { 0, 1, 0, 3, 2 };
	map<int, int> e = { {0,2}, {1, 1}, {2, 1}, {3, 1} };
	return (e == spector<vector<int>, map<int,int>>(v)) ? 0 : 1;
}
