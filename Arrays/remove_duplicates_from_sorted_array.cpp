/*
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void remove_duplicates(vector<int> &arr)
{
    int i = 0, j = 0;
    while (j < arr.size())
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            i++;
            swap(arr[i], arr[j]);
            j++;
        }
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
