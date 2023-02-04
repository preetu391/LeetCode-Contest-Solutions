#include <bits/stdc++.h>
using namespace std;

int maxCount(vector<int> &banned, int n, int maxSum)
{
    int cnt = 0;
    map<int, int> m;
    for (int i = 0; i < banned.size(); i++)
    {
        m[banned[i]]++;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i + sum > maxSum)
            break;
        if ((m.find(i) == m.end()))
        {
            cnt++;
            sum += i;
        }
        if (sum >= maxSum)
            break;
    }
    return cnt;
}

int main()
{
    vector<int> banned = {1, 2, 3};
    int n = 10, maxSum = 17;
    maxCount(banned, n, maxSum);
    return 0;
}