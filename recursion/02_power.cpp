#include <bits/stdc++.h>
using namespace std;

// int power(int n)
// {
//     // base case
//     if(n==0) return 1;
//     // recursive relation
//     return 2 * power(n-1);
// }
// int main()
// {
//     int n;
//     cout << "Enter value : ";
//     cin >> n;

//     int ans = power(n);
//     cout << "Base 2 and power " << n << " ans is : " << ans << endl;
// }

double myPow(double x, int n)
{
    cout << x << " and " << n << endl;
    // base case
    if (n == 0)
        return 1;
    if (n == 1)
        return x;

    if (n < 0)
    {
        n = abs(n);
        cout << "n : " << n << endl;
        cout << "x : " << x << endl;
        x = 1 / x;
        cout << "x : " << x << endl;
    }
    if (n % 2 == 0)
    {
        return myPow(x * x, n / 2);
    }

    return x * myPow(x, n - 1);
}

int main()
{

    double x = myPow(2, -2);
    cout << " result is : " << x << endl;

    return 0;
}