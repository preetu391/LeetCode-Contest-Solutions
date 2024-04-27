#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long numberOfRightTriangles(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        long long cnt = 0;
        vector<int> pr(n, 0);
        vector<int> pc(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j])
                {
                    pr[i]++;
                    pc[j]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j])
                {
                    cnt += (long long)((pr[i] - 1) * (pc[j] - 1));
                }
            }
        }
        return cnt;
    }
};
