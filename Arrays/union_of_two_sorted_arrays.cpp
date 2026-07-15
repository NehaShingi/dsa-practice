/*
Problem Statement - Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

Time Complexity: O(n+m), because each array is traversed exactly once using two pointers.
Space Complexity:O(n+m), because the union is stored in a separate vector, which in the worst case can contain all elements from both arrays.
*/

#include <iostream>
#include <vector>
using namespace std;

void unionOfArrays(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (ans.empty() || ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else
        {

            if (ans.empty() || ans.back() != arr2[j])
            {
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n)
    {
        if (ans.empty() || ans.back() != arr1[i])
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m)
    {
        if (ans.empty() || ans.back() != arr2[j])
        {
            ans.push_back(arr2[j]);
        }
        j++;
    }

    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << " ";
    }
}
int main()
{
    int n = 5;
    int m = 5;
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5};
    unionOfArrays(arr1, n, arr2, m);
}