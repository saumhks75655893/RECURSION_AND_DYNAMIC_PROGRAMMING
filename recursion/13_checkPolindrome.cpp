#include <bits/stdc++.h>
using namespace std;

bool checkPolindrome(string s, int i, int j)
{
    if (i > j)
        return true;

    if (s[i] != s[j])
        return false;
    else
    {
        return checkPolindrome(s, i+1, j-1);
    }
}
int main()
{
    string str = "123454321";

    bool isPolindrome = checkPolindrome(str, 0, str.length() - 1);
    if (isPolindrome)
    {
        cout << "It's a polindrome ! " << endl;
    }
    else
    {
        cout << "It's not a polindrome ! " << endl;
    }

    return 0;
}