#include <bits/stdc++.h>
using namespace std;

vector<int> separateDigits(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        vector<int> v;
        while (nums[i] != 0)
        {
            v.push_back(nums[i] % 10);
            nums[i] /= 10;
        }
        reverse(v.begin(), v.end());
        for (auto &it : v)
        {
            ans.push_back(it);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 45, 758};
    separateDigits(nums);
    return 0;
}