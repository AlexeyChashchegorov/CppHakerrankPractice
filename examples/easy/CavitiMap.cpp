/*
	Statements: https://www.hackerrank.com/challenges/cavity-map/problem
*/

#include <common.h>

vector<string> cavityMap(vector<string> grid)
{
	vector<pair<int,int>> diffs = {{-1,0},{0,-1},{0,1},{1,0}};
	auto ret = grid;
	for(int i=1;i<(grid.size()-1);i++)
	{
		for(int j=1; j<(grid[i].size()-1); j++)
		{
			int c = count_if(diffs.begin(), diffs.end(), [&i, &j, &grid](pair<int,int> d)
				{
					return atoi(grid[i+d.first].substr(j+d.second,1).c_str()) < 
						atoi(grid[i].substr(j,1).c_str());
				});
			ret[i][j] = (c == diffs.size()) ? 'X' : grid[i][j];
		}
	}
	return ret;
}

int main()
{
	for(auto cl : cavityMap(parseVector<string>(cin)))
		cout << cl << endl;

	return 0;
}

