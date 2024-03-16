#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfEncryptedInt(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            int mx = 0;
            int n = 0;
            while (temp != 0)
            {
                mx = max(mx, temp % 10);
                temp /= 10;
                n++;
            }
            string s = string(n, mx + '0');
            sum += stoi(s);
        }
        return sum;
    }
};