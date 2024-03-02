#include <bits/stdc++.h>
using namespace std;

int sumOfElement(int *arr, int size)
{
    int sum = 0;
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int ans = arr[0] + sumOfElement(arr+1, size-1); 
}
int main()
{
    int arr[1] = {10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = sumOfElement(arr, size);

    cout << "sum of all element  : " << ans << endl;

    return 0;
}