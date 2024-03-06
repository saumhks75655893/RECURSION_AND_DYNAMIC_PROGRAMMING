#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainIndex = s;

    // copy values
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainIndex++];
    }
 
    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainIndex++];
    }

    // merge 2 sorted array

    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainIndex++] = arr1[index1++];
        }
        else
        {
            arr[mainIndex++] = arr2[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainIndex++] = arr1[index1++];
    }
    while (index2 < len2)
    {
        arr[mainIndex++] = arr2[index2++];
    }

    delete []arr1; 
    delete []arr2; 
}
void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // process
    int mid = (s + e) / 2;
    // recursive call
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[21] = {6, 1, 2, 9, 10,100,500,345234,13414,4545,34132,4,2452345,12,45, 22, 19, 4, 6, 112, 345};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}