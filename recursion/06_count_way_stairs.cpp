#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;

        return (countWays(n - 1) + countWays(n - 2));
    }
};

//{ Driver Code Starts.
int main()
{
    // taking stair count
    int m;
    cout<<"enter : "; 
    cin >> m;
    int i = 0;
    Solution ob;

    cout << "way : " << ob.countWays(m) << endl; 
}

// } Driver Code Ends