// Square sum of the first n natural numbers

#include<bits/stdc++.h>
using namespace std; 

int SquareSum(int n)
{
    if(n == 1)
     return 1; 

    int ans = n*n+SquareSum(n-1); 
    return ans; 
}
int main()
{

    int n ; 
    cout<<"Enter number : "; 
    cin>> n; 

    int sqSum = SquareSum(n); 
    cout<<"Sum of first "<<n<<" natural number's square : "<<sqSum<<endl;
    return 0; 
}