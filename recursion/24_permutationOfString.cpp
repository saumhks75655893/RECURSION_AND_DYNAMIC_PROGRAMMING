#include <bits/stdc++.h>
using namespace std;

class solution
{
private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans)
    {
        // base case
        if (index >= nums.size())
        {
            cout << nums[index] << endl; 
            ans.push_back(nums);
            return;
        }
        // process
        for (int j = 0; j < nums.size(); j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, index + 1, ans);
            swap(nums[j], nums[index]);
        }
    }

public:
    vector<vector<int>> permutation(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, index, ans);

        cout << "{ " << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "(";
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << "[ " << ans[i][j] << " ]"
                     << " ,";
            }
            cout << ")";
            cout << endl;
        }
        cout << "}" << endl;
    }
};
int main()
{
    solution sl;

    vector<int> nums = {1, 2, 3};
    sl.permutation(nums);

    return 0;
}