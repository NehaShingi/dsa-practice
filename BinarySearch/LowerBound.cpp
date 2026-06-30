/*
Given a sorted array of N integers and an integer x, write a program to find the lower bound of x

The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.

Time Complexity: O(log N)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int findLowerBound(vector<int> &arr, int key)
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
            high = mid - 1; // serach in left half for smaller index
        }
        else
        { // arr[mid]<key
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3};
    int key = 2;
    int lowerBound = findLowerBound(arr, key);

    cout << "Lower Bound:" << lowerBound;

    return 0;
}