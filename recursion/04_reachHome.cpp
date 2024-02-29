#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Src " << src << " reached out of  destination  " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "I've reached home.";
        return;
    }

    // processing
    src++;

    // recursive function
    reachHome(src, dest);
}
int main()
{
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    return 0;
}