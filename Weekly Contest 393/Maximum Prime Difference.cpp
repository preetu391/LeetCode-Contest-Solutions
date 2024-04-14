#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool prime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }
    int maximumPrimeDifference(vector<int> &nums)
    {
        int mx = 0;
        int idx = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (prime(nums[i]))
            {
                if (idx != -1)
                {
                    mx = max(mx, i - idx);
                }
                else
                    idx = i;
            }
        }
        return idx == -1 ? 0 : mx;
    }
};