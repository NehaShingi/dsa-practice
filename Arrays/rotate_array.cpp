/*
Problem Statement: Given an integer array arr, rotate the array to the right by k steps, where k is non-negative.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate_array(vector<int> &arr, int k)
{
    int n = arr.size();

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate_array(arr, k);
}