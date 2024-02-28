#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // base case 
    if (n == 0)
        return 1;
        
    // recursive relation 
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "enter the num : ";
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of " << n << " is : " << ans << endl;
}