/*
Leetcode Problem -1752: Check if Array Is Sorted and Rotated
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums)
{
    // A valid sorted and rotated array can have atmost 1 drop count(ie nums[i]>nums[i+1]). If count exceeds 1 it is not rotated and sorted
    int count = 0;
    int n = nums.size();
    if (nums[n - 1] > nums[0])
        count++; // circular comparison
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            count++;
        if (count > 1)
            return false;
    }
    return true;
}

int main()
{
    vector<int> nums1 = {3, 4, 5, 1, 2};
    int ans1 = check(nums1);
    cout << "nums1 array is sorted and rotated- " << ans1 << endl;

    vector<int> nums2 = {3, 1, 4, 2};
    int ans2 = check(nums2);
    cout << "nums2 array is sorted and rotated- " << ans2 << endl;
}