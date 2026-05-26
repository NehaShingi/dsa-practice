/* Binary Search Algorithm
    Time Complexity: O(log n)
    Space Complexity:O(1);
*/

#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 6, 15, 35, 67, 123};
    int target = 35;
    int idx = BinarySearch(arr, target);

    if (idx == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index:" << idx;
    }
}
