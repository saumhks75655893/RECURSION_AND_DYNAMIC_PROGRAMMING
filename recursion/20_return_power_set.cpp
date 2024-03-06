#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> num, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index == num.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(num, output, index + 1, ans);

    // include
    int ans1 = num[index];
    output.push_back(ans1);
    solve(num, output, index + 1, ans);
}

vector<vector<int>> subset(vector<int> &num)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(num, output, index, ans);
    cout << "{ " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"("; 
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << "[ " << ans[i][j] << " ]"
                 << " ,";
        }
        cout<<")"; 
        cout<<endl; 
    }
    cout << "}" << endl;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    subset(arr);

    return 0;
}