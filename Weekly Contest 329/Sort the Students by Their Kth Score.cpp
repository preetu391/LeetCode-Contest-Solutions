#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, vector<int>> a, const pair<int, vector<int>> b)
{
    return a.first > b.first;
}

vector<vector<int>> sortTheStudents(vector<vector<int>> &score, int k)
{
    vector<pair<int, vector<int>>> p;
    for (auto &i : score)
    {
        p.push_back(make_pair(i[k], i));
    }
    sort(p.begin(), p.end(), cmp);
    vector<vector<int>> ans;
    for (auto &it : p)
    {
        ans.push_back(it.second);
    }
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {2, 3, 6}, {4, 1, 2}};
    int k = 1;
    sortTheStudents(v, k);
    return 0;
}