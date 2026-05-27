/*
    Time Complexity: O(
    Space Complexity: O(
*/

#include <iostream>
#include <vector>
using namespace std;

void left_rotate_array(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    left_rotate_array(arr);
}