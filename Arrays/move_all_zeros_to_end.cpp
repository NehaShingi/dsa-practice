/*
Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void move_zeros(vector<int> &arr)
{
    int i = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[i] == 0)
        {
            if (arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    for (int k = 0; k < arr.size(); k++)
    {
        cout << arr[k];
    }
}

int main()
{
    vector<int> arr = {1, 2, 0, 1, 0, 4, 0};
    move_zeros(arr);
}