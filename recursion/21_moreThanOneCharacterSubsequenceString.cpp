#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string S, string output, int index, set<string> &ans)
    {
        if (index >= S.length())
        {
            if (output.length() > 1)
            {
                ans.insert(output);
            }
            return;
        }

        // exclude
        solve(S, output, index + 1, ans);

        // include
        char temp = S[index];
        output.push_back(temp);
        solve(S, output, index + 1, ans);
    }

    set<string> allPossibleSubsequences(string S)
    {
        int index = 0;
        set<string> ans;
        string output = "";

        solve(S, output, index, ans);

        return ans;
    }
};

int main()
{
    string S;
    cout << "Enter a string : ";
    cin >> S;

    Solution ob;
    set<string> ans = ob.allPossibleSubsequences(S);

    if (ans.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
