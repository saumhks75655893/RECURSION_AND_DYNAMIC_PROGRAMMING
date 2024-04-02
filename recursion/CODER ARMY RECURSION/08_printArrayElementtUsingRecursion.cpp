// Array element printing using recursion

#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int index)
{
    if (index == 0)
        return;

    printArray(arr, index - 1);
    cout << arr[index-1] << " ";
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, index);

    return 0;
}