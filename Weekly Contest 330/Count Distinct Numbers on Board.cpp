#include <bits/stdc++.h>
using namespace std;

int distinctIntegers(int n) {
        if(n==1||n==2) return 1;
        return n-1;
    }

int main()
{
    int n=5;
    distinctIntegers(n);
    return 0;
}