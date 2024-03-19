#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    // base case
    if (n == 0)
    {
        cout << "Happy birthday ! ";
        return;
    }
    // process
    cout << n << " days left for birthday ! ";
    cout << endl;

    // recursive call
    fun(n - 1);
}
int main()
{
    int n;
    cout << "Number of days : ";
    cin >> n;
    fun(n);

    return 0;
}