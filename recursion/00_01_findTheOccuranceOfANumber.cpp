#include <bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[], int index, int size, int x)
{
    int ans = 0;
    if (size == 0)
    {
        return -1;
    }
    else if (arr[index] == x)
    {
        return index;
    }
    else
    {
        ans = firstOccurance(arr, index + 1, size - 1, x);
        if(ans == -1)
        {
            return -1; 
        }
        else
        {
            return ans + 1; 
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 4, 6, 4};
    int x = 4;
    int index = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = firstOccurance(arr, index, size, x);
    cout << "Index of the first occurace of "<< x << " is : " << ans << endl;

    return 0;
}