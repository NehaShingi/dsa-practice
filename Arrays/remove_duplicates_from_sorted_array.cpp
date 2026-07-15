/*
Leetcode Problem - 26
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void remove_duplicates(vector<int> &arr)
{
    int i = 0, j = 1;
    while (j < arr.size())
    {
        while (arr[i] == arr[j])
        {
            j++;
        }
        i++;
        swap(arr[i], arr[j]);
        j++;
    }

    for (int k = 0; k <= i; k++)
    {
        cout << arr[k];
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
    remove_duplicates(arr);
}
