#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}
int main()
{
    int arr[11] = {2, 120, 30, 0, 9, 8, 40, 1, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}