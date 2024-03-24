#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

class Solution
{
public:
    int recur(int num, int sum, int mx, int k, vector<vector<int>> &dp)
    {
        if (sum >= k)
            return mx;
        if (dp[num][sum] != -1)
            return dp[num][sum];
        int a = 1 + recur(num, sum + num, mx, k, dp);
        int b = 1 + recur(num + 1, sum + 1, mx, k, dp);
        mx = min(a, b);
        dp[num][sum] = mx;
        return mx;
    }
    int minOperations(int k)
    {
        // vector<vector<int>> dp(k+1,vector<int>(k+1,-1));
        // return recur(1,1,0,k,dp);
        if (k == 1)
            return 0;
        int x = ceil(sqrt(k));
        return x - 1 + ceil(float(k - x) / float(x));
    }
};