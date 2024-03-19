#include<bits/stdc++.h>
using namespace std; 

void print(int n)
{
    if(n == 0)
    {
        return ;
    }
    // character values 

    // print(n-1); 
    // cout << char(n+96) <<"  "; 
    // cout <<endl; 

    // 1 to n number

    // print(n-1);
    // cout<<n<<" "; 
    // cout<<endl; 

    // Even number 

    print(n-1); 
    if(n%2==0)
     cout<<n; 
    cout<<endl; 
}
int main()
{


    int n; 
    cout<<"enter n : "; 
    cin>> n; 

    print(n); 
    return 0;
}