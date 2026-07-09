/*
Write a program to generate Pascal's triangle. In Pascal’s triangle, each number is the sum of the two numbers directly above it.

Time Complexity:
The rows have lengths:
1
2
3
...
n

So the total work is:
1 + 2 + 3 + ... + n

which equals : n(n + 1) / 2
Therefore,
Time Complexity = O(n²)


Space Complexity:
Auxiliary Space (extra space excluding output): O(n) (because currentRow is the largest extra data structure)
Total Space (including the returned answer): O(n²) (because the triangle itself contains O(n²) elements)

*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(vector<vector<int>> &arr, int n)
{
    while (arr.size() < n)
    {
        vector<int> &previousRow = arr.back();
        int size = previousRow.size();
        vector<int> currentRow(size + 1, 0);
        int prev, next;

        for (int j = 0; j <= size; j++) // j is the posistion we are filling in current row
        {
            if (j == 0)
            {
                prev = 0;
            }
            else
            {
                prev = previousRow[j - 1];
            }

            if (j == size)
            {
                next = 0;
            }
            else
            {
                next = previousRow[j];
            }

            int output = prev + next;
            currentRow[j] = output;
        }
        arr.push_back(currentRow);
    }
    return arr;
}
int main()
{
    vector<vector<int>> arr = {{1}};

    vector<vector<int>> ans = pascalTriangle(arr, 5);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

/*
Steps:
For every position j in the current row:

Look one step left in the previous row (j - 1).
Look at the same position in the previous row (j).
Add them.
Store the result at currentRow[j].
*/