/*

Leetcode Problem 35 - Search Insert Position
Given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

Time Complexity: O(log N)
Space Complexity: O(1)

*/
#include <iostream>
#include <vector>
using namespace std;

int searchPosition(vector<int> &arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= key)
        {
            ans = mid;      // store possible answer
            high = mid - 1; // search for smaller index
        }
        else
        {
            // arr[mid]<key
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int key = 1;
    int insertPosition = searchPosition(arr, key);
    cout << "Insert Position is:" << insertPosition;
}
