#include <bits/stdc++.h>
using namespace std;

void reverseString(string &name, int i, int j)
{
    // base case
    if (i > j)
        return;

    swap(name[i], name[j]);
    i++;
    j--;

    // recursive case

    return reverseString(name, i, j);
}
int main()
{
    string name = "himanshu kumar";
    reverseString(name, 0, name.length() - 1);

    cout << "Reversed string : " << name << endl;
    return 0;
}