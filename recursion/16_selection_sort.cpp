#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int size, int start)
{
    // size of the array

    // base case : already sorted
    if (start == size)
        return;

    // process
    int min_index = start;

    for (int i = start+1; i < size; i++)
    {
        if (arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }
    int temp = arr[min_index];
    arr[min_index] = arr[start];
    arr[start] = temp;

    // recursive call
    selectionSort(arr, size, start + 1);
}
int main()
{
    int arr[11] = {2, 120, 30, 0, 9, 8, 40, 1, 3, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}