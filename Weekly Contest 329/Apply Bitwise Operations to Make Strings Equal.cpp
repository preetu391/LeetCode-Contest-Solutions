#include <bits/stdc++.h>
using namespace std;

bool makeStringsEqual(string s, string target)
{
    if (s == target)
        return true;
    int cnt_one_in_s = 0, cnt_one_in_t = 0;
    for (auto &it : s)
    {
        if (it == '1')
            cnt_one_in_s++;
    }
    for (auto &it : target)
    {
        if (it == '1')
            cnt_one_in_t++;
    }
    if ((cnt_one_in_s == 0 && cnt_one_in_t > 0) || (cnt_one_in_s > 0 && cnt_one_in_t == 0))
    {
        return false;
    }
    return true;
}

int main()
{
    string s = "1010", target = "1100";
    makeStringsEqual(s, target);
    return 0;
}