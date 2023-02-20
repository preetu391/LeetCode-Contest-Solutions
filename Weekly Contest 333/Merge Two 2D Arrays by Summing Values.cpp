#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
{
    vector<vector<int>> v;
    map<int, vector<int>> m;
    for (auto it : nums1)
    {
        m[it[0]].push_back(it[1]);
    }
    for (auto it : nums2)
    {
        m[it[0]].push_back(it[1]);
    }
    for (auto &i : m)
    {
        int sum = 0;
        for (int j = 0; j < (i.second).size(); j++)
        {
            sum += i.second[j];
        }
        v.push_back({i.first, sum});
    }
    return v;
}

int main()
{
    return 0;
}