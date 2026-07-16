/*
Leetcode Problem- 485 Maximum Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Time Complexity:O(n)
space Complexity:O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
    // handle edge case where array ends with 1s
    maxCount = max(maxCount, count);
    return maxCount;
}
int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "MAx Consectiver Ones:" << findMaxConsecutiveOnes(nums) << endl;

    vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    cout << "MAx Consectiver Ones:" << findMaxConsecutiveOnes(nums2) << endl;
}