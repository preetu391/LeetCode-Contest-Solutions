#include <bits/stdc++.h>
using namespace std;

int digitsum(int num)
{
    int s = 0;
    while (num != 0)
    {
        s += (num % 10);
        num /= 10;
    }
    return s;
}

int differenceOfSum(vector<int> &nums)
{
    int sum = 0, digisum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        digisum += digitsum(nums[i]);
    }
    return abs(sum - digisum);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 51};
    cout << differenceOfSum(v);
    return 0;
}