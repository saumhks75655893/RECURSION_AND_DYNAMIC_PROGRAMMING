#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "size of the array : " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}
bool linearSearch(int *arr, int size, int key)
{
    printarray(arr, size);
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool ans = linearSearch(arr + 1, size - 1, key);
        return ans;
    }
}
int main()
{
    int arr[10] = {10, 1, 2, 4, 6, 11, 13, 20, 45, 32};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "search element : ";
    cin >> key;

    bool ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "element found.";
    }
    else
    {
        cout << "element not found.";
    }

    return 0;
}