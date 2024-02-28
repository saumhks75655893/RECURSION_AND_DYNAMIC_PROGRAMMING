#include <bits/stdc++.h>
using namespace std;

void counting(int n)
{
    // base case
    if (n == 0)
        return;

    counting(n - 1);
    cout << n << "  ";
}
int main()
{
    int m;
    cout << "Enter counrting number : ";
    cin >> m;

    counting(m);
   
}
