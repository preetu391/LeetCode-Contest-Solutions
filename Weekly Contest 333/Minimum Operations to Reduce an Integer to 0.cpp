#include <bits/stdc++.h>
using namespace std;

vector<int> powsOfTwo;
int calculateMinDiff(int n)
{
    int val = INT_MAX;
    for (int i = 0; i < powsOfTwo.size(); i++)
    {
        int k = abs(powsOfTwo[i] - n);
        val = min(k, val);
    }
    return val;
}
int minOperations(int n)
{
    int ans = 0;
    for (int i = 0; i <= 16; i++)
    {
        int val = pow(2, i);
        powsOfTwo.push_back(val);
    }
    while (n != 0)
    {
        n = calculateMinDiff(n);
        ans++;
    }
    return ans;
}

int main()
{
    return 0;
}