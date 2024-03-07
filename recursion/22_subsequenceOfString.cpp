#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void solve(string str, string output, int index, vector<string> &ans)
    {
        if (index >= str.length())
        {
            if (output.length() > 0)
                ans.push_back(output);
            return;
        }

        // exclude
        solve(str, output, index + 1, ans);

        // include
        char temp = str[index];
        output.push_back(temp);
        solve(str, output, index + 1, ans);
    }
    vector<string> subSequence(string str)
    {
        vector<string> ans;
        string output = "";

        int index = 0;
        solve(str, output, index, ans);

        return ans;
    }
};
int main()
{
    string s;
    cout << "Enter string : ";
    cin >> s;
    solution sl;

    vector<string> ans = sl.subSequence(s);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}