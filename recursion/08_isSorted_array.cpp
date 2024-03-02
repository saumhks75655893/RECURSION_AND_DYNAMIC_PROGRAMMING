#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {1, 2, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    bool ans = isSorted(arr, size);
    if (ans)
    {
        cout << " The given array is sorted. " << endl;
    }
    else
    {
        cout << "The given array is not sorted. " << endl;
    }

    return 0;
}