// RAT IN A MAZE : ---------

#include <bits/stdc++.h>
using namespace std;

class solution
{
private:
    bool isSafe(vector<vector<int>> &m, int n, vector<vector<int>> visited, int x, int y)
    {
        if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, string path, vector<vector<int>> visited)
    {
        // base case
        if (x == (n - 1) && y == (n - 1))
        {
            ans.push_back(path);
            return;
        }

        // process
        visited[x][y] = 1;

        // DOWN
        int newx = x + 1;
        int newy = y;
        if (isSafe(m, n, visited, newx, newy))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }
        // UP
        newx = x - 1;
        newy = y;
        if (isSafe(m, n, visited, newx, newy))
        {
            path.push_back('U');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }

        // LEFT
        newx = x;
        newy = y - 1;
        if (isSafe(m, n, visited, newx, newy))
        {
            path.push_back('L');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }

        // RIGHT
        newx = x;
        newy = y + 1;
        if (isSafe(m, n, visited, newx, newy))
        {
            path.push_back('D');
            solve(m, n, ans, newx, newy, path, visited);
            path.pop_back();
        }
        visited[x][y] = 0;
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        if (m[0][0] == 0)
        {
            return ans;
        }
        string path = "";
        vector<vector<int>> visited = m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                visited[i][j] = 0;
            }
        }
        int srcx = 0;
        int srcy = 0;
        solve(m, n, ans, srcx, srcy, path, visited);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    int n = 4;
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1},
                             {1, 1, 0, 0},
                             {0, 1, 1, 0}};

    solution sl;
    vector<string> ans = sl.findPath(m, n);
    if (ans.size() == 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << "  ";
        }
        cout << endl;
    }

    return 0;
}
