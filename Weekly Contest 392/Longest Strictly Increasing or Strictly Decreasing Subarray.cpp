#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int inc_len = 1, dec_len = 1, inc_max_len = 1, dec_max_len = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] < nums[i])
            {
                inc_len++;
            }
            else
            {
                inc_len = 1;
            }
            inc_max_len = max(inc_len, inc_max_len);
        }
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i - 1] > nums[i])
            {
                dec_len++;
            }
            else
            {
                dec_len = 1;
            }
            dec_max_len = max(dec_len, dec_max_len);
        }
        return max(dec_max_len, inc_max_len);
    }
};