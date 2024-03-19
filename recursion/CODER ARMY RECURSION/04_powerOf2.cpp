// power of 2
#include<bits/stdc++.h>
using namespace std; 

int powerof2(int n)
{
    if(n==0)
     return 1; 

    return 2 * powerof2(n-1); 
}
int main()
{

    int n; 
    cout<<"Enter power value : ";
    cin>>n;

    int power2 = powerof2(n); 
    cout<<"2 to the power "<<5<<" will be : "<<power2<<endl; 
    return 0; 
}