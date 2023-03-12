#include <bits/stdc++.h>
using namespace std;

int vowelStrings(vector<string> &words, int left, int right)
{
    int cnt = 0;
    map<char, int> m;
    m['a'] = 1;
    m['e'] = 1;
    m['i'] = 1;
    m['o'] = 1;
    m['u'] = 1;
    for (int i = left; i <= right; i++)
    {
        if (m.find(words[i][0]) != m.end() && m.find(words[i][words[i].size() - 1]) != m.end())
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    return 0;
}