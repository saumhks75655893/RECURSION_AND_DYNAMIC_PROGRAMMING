// SUM OF ARRAY ELEMENTS
#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int *arr, int size)
{
    if (size == -1)
    {
        return 0;
    }
    return arr[size] + sumOfArray(arr, size - 1);
}
int main()
{
    int arr[] = {1, 2, 5, 6, 3, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumOfArray(arr, n - 1);
    cout << " sum of elements : " << sum << endl;

    return 0;
}