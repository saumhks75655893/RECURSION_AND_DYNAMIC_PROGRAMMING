#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s]; 
    int cntS = 0; 
    for(int i=s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        {
            cntS++; 
        }
    }
    //place pivot at right place 
    int pivotIndex = s + cntS; 

    swap(arr[pivotIndex], arr[s]); 

    // >a a <a 
    int i=s, j=e;

    while(i<pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot )
        {
            i++; 
        }
        while(arr[j] > pivot)
        {
            j--; 
        }
        if(i<pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]); 
        }
    }
    return pivotIndex; 
}
void quickSort(int *arr, int s, int e)
{
    // base case
    if(s>=e)
    return ; 

    // process 
    int p = partition(arr, s,e); 

    // recursive call 
    quickSort(arr, s, p-1); 
    quickSort(arr,p+1, e); 


}
int main()
{
    int arr[21] = {6, 1, 2, 9, 10, 100, 500, 345234, 13414, 4545, 34132, 4, 2452345, 12, 45, 22, 19, 4, 6, 112, 345};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}