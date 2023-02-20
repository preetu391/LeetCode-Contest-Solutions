#include <bits/stdc++.h>
using namespace std;

string findTheString(vector<vector<int>> &lcp)
{
    int n = lcp.size();
    if (lcp[0][0] != n)
        return "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (lcp[i][j] != lcp[j][i])
                return "";
            if (lcp[i][j] > (n - max(i, j)))
                return "";
            if ((i + 1 < n) && (j + 1 < n) && (lcp[i][j] > 0))
            {
                if (lcp[i + 1][j + 1] != lcp[i][j] - 1)
                {
                    return "";
                }
            }
        }
    }
    string res(n, ' ');
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        if (res[i] != ' ')
            continue;
        if (c > 'z')
            return "";
        for (int j = 0; j < n; j++)
        {
            if (lcp[i][j] > 0)
                res[j] = c;
        }
        c++;
    }
    return res;
}

int main()
{
    return 0;
}