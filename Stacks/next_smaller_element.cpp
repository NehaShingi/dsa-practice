/*
Problem Statement: Given an array of integers arr, your task is to find the Next Smaller Element (NSE) for every element in the array.
The Next Smaller Element for an element x is defined as the first element to the right of x that is smaller than x.
If there is no smaller element to the right, then the NSE is -1.

Brute Force Approach : Use nested loops. Outer loop goes from 0 to N and inner loop goes from i+1 to N. if arr[j] <arr[i] we found nse so add it to ans and break.
Time Complexity: O(n^2)

Optimal Approach: Use Monotonic stacks
Time Complexity: O(n)
Space Complexity: O(n) - answer array
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

vector<int> findSmaller(vector<int> &arr)
{
    vector<int> ans;
    stack<int> st;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {4, 8, 5, 2, 25};
    vector<int> ans = findSmaller(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}