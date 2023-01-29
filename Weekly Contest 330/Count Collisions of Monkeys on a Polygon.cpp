#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
long long mpow(long long x, long long b)
{
    long long r = 1;
    while (b)
    {
        if (b & 1)
            r = r * x % mod;
        x = x * x % mod;
        b >>= 1;
    }
    return r;
}
int monkeyMove(int n)
{
    int ans = mpow(2, n);
    ans -= 2;
    ans += mod;
    return ans % mod;
}

int main()
{
    int n = 5;
    monkeyMove(n);
    return 0;
}