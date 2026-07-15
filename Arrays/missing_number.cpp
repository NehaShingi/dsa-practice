/*
Problem Statement: Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int> &arr)
{
    int n = arr.size() + 1;
    long long sum = 0;
    long long totalSum = 1LL * n * (n + 1) / 2;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    return totalSum - sum;
}

int main()
{
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    cout << missingNum(arr) << endl;
    return 0;
}

/*Approach 2: Using XOR property

arr = {1,2,4,5}
Numbers should be- 1 2 3 4 5

Missing = 3

Now XOR all numbers from 1 to n
1 ^ 2 ^ 3 ^ 4 ^ 5

Also XOR every element of the array
1 ^ 2 ^ 4 ^ 5

Now XOR both results together.
You get
(1 ^ 2 ^ 3 ^ 4 ^ 5)
^
(1 ^ 2 ^ 4 ^ 5)

Everything cancels 0 ^ 0 ^ 3 ^ 0 ^ 0 , except 3 which is the required answer.

int missingNumber(vector<int>& arr) {
    int n = arr.size() + 1;

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 1; i <= n; i++)
        xor1 ^= i;

    for (int num : arr)
        xor2 ^= num;

    return xor1 ^ xor2;
}
*/