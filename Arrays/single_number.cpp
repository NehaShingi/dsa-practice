/*
Leetcode Problem- 136 Single Number
Problem Statement: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Approach
Use the XOR property:
a ^ a = 0 (same numbers cancel each other)
a ^ 0 = a
Since every element appears twice except one, XORing all the elements cancels the duplicate pairs, leaving only the single number.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums1 = {2, 2, 1};
    cout << "Single Number: " << singleNumber(nums1) << endl;
    vector<int> nums2 = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums2) << endl;
}
