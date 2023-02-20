#include <bits/stdc++.h>
using namespace std;

long long findTheArrayConcVal(vector<int> &nums)
{
    int n = nums.size();
    long long i = 0, j = n - 1, concatenation = 0;
    while (i < j)
    {
        string s = "";
        s += to_string(nums[i]) + to_string(nums[j]);
        concatenation += stoi(s);
        i++;
        j--;
    }
    if (i == j)
        concatenation += nums[i];
    return concatenation;
}

int main()
{
    return 0;
}