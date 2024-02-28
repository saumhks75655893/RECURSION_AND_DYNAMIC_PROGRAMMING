#include <bits/stdc++.h>
using namespace std;

int power(int n)
{
    // base case 
    if(n==0) return 1;
    // recursive relation
    return 2 * power(n-1);
}
int main()
{
    int n;
    cout << "Enter value : ";
    cin >> n;

    int ans = power(n);
    cout << "Base 2 and power " << n << " ans is : " << ans << endl;
}