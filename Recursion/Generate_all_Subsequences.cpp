/*
Recursive Generation of Subsequences

A subsequence is a sequence obtained by deleting zero or more elements from an array or string without changing the relative order of the remaining elements.

The elements do not need to be contiguous (adjacent).

Time Complexity: O(n × 2^n) ,
O(n) for printing each subsequence and O(2^n) for generating all subsequences

Space Complexity:O(n × 2^n),
O(2^n) for storing all subsequences, O(n) for recursion stack space

*/
#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(int idx, vector<int> &arr, vector<int> &subseq)
{

    // Base Case
    if (idx == arr.size())
    {
        if (subseq.empty())
        { // print empty subsequence
            cout << "{}";
        }
        else
        {
            for (int x : subseq)
            { // print entire subsequence when we reach end of array
                cout << x << " ";
            }
        }
        cout << endl;
        return;
    }

    // Recursive Case

    // Include the current element in the subsequnce
    subseq.push_back(arr[idx]);
    printSubsequences(idx + 1, arr, subseq);

    // Don't Include the current element in the subsequnce
    subseq.pop_back();
    printSubsequences(idx + 1, arr, subseq);
}

int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> subseq = {};

    printSubsequences(0, arr, subseq);
}