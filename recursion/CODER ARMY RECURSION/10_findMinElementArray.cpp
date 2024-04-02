#include <bits/stdc++.h>
using namespace std;

int minElement(int arr[],int index, int size)
{
    if(index == size-1)
     return arr[index];

    return min(arr[index],minElement(arr,index+1,size)); 

    
}
int main()
{
    int arr[] = {10,11,6,3,3453,654}; 
    int size = sizeof(arr)/sizeof(arr[0]); 

    cout << "Min elemen is : "<<minElement(arr,0,size); 
    return 0;
}