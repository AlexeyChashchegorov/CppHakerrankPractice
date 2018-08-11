/*
	Statements: https://www.hackerrank.com/challenges/lisa-workbook/problem
*/
#include <common.h>

int workbook(int n, int k, vector<int> arr) {
    int count = 0;
    for(int chapter_number=1, page_number=0;chapter_number<=arr.size();chapter_number++)
    {
        int problems_count = arr[chapter_number-1];
        for(int p=1; p<=problems_count;p++)
        {
            if (((p-1)%k)==0)
                page_number++;
            if(page_number == p)
                count++;
        }
    }
    return count;

}

int main()
{
	int n, k;
	cin >> n >> k;
    	cout << workbook(n, k, parseVector<int>(cin, n)) << endl;
	return 0;
}
