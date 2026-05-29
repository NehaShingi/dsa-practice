/*
Problem Statement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Time Complexity: O(n)
Space Complexity: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int requiredSum = target - nums[i];

        if (mp.find(requiredSum) != mp.end())
        {
            return {i, mp[requiredSum]};
        }
        mp[nums[i]] = i;
    }

    return {-1, -1};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
}