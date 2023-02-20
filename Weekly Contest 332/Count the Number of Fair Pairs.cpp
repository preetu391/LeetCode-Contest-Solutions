#include <bits/stdc++.h>
using namespace std;

long long countFairPairs(vector<int> &nums, int lower, int upper)
{
    sort(nums.begin(), nums.end());
    long long cnt = 0;
    int i = 0, low = nums.size() - 1, high = nums.size() - 1;
    while (i < high)
    {
        low = max(i, low);
        while (low > i && nums[i] + nums[low] >= lower)
            --low;

        while (high > low && nums[i] + nums[high] > upper)
            --high;
        cnt += (high - low);
        i++;
    }
    return cnt;
}

int main()
{
    return 0;
}