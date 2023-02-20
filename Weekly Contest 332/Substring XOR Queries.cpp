#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> substringXorQueries(string s, vector<vector<int>> &queries)
{
    map<int, vector<int>> m;
    for (int i = 0; i < s.length(); i++)
    {
        long long num = 0;
        for (int j = i, k = 0; j >= 0 && k <= 31; j--, k++)
        {
            int bit = s[j] - '0';
            num += (bit << k);
            vector<int> v = {j, i};
            if (num < INT_MAX && m.find(num) == m.end())
            {
                m[num] = v;
            }
        }
    }
    vector<vector<int>> ans;
    for (auto &i : queries)
    {
        int target = (i[0] ^ i[1]);
        if (m.find(target) != m.end())
        {
            ans.push_back(m[target]);
        }
        else
            ans.push_back({-1, -1});
    }
    return ans;
}

int main()
{
    return 0;
}