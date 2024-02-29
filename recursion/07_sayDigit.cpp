#include <bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return;

    // processing
    int digit = n % 10;
    n = n / 10;

    // recursive case
    sayDigit(n, arr);

    cout << arr[digit] << "  ";
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, arr);
}