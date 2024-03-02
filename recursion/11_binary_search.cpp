#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
bool binarySearch(int *arr, int s, int e, int k)
{
    print(arr, s, e);
    // base case
    if (s > e)  
        return false;

    int mid = s + (e - s) / 2;
    cout << "Value of mid is : " << arr[mid] << endl;
    // element found
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[10] = {10, 1, 2, 4, 6, 11, 13, 20, 32,45};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl; 
    int key = 32;
    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans)
    {
        cout << "Element found . " << endl;
    }
    else
    {
        cout << "Element not found. " << endl;
    }
    return 0;
}