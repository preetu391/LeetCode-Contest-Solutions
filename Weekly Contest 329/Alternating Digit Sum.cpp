#include <bits/stdc++.h>
using namespace std;

int alternateDigitSum(int n)
{
    int ans = 0;
    vector<int> v;
    while (n != 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }
    int rem = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans += (rem * v[i]);
        rem *= -1;
    }
    return ans;
}

int main()
{
    int n = 34;
    alternateDigitSum(n);
    return 0;
}