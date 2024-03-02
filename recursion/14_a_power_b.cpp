#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    cout << a << " and " << b << endl;
    // base case
    if (b == 0)
        return 0;
    if (b == 1)
        return a;

    // recursive call
    int ans = power(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a;
    cout << "a = ";
    cin >> a;
    int b;
    cout << "b = ";
    cin >> b;
    cout << endl;
    int ans = power(a, b);
    cout << endl
         << a << " power " << b << " is : " << ans << endl
         << endl;

    return 0;
}