/*
	Statements: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
*/

#include <common.h>

int designerPdfViewer(vector<int> h, string word)
{
    string letters = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char,int> letters_heights;
    for(int i=0; i<h.size();i++)
        letters_heights[letters[i]] = h[i];
    int max_height = 0;
    for(int i=0; i<word.size(); i++)
        max_height = max(max_height, letters_heights[word[i]]);
    return max_height * word.size();
}

int main()
{
    cout << designerPdfViewer(parseVector<int>(cin, 26), parse<string>(cin)) << endl;
    return 0;
}
