#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

class Solution
{
public:
    int maximumLengthSubstring(string s)
    {
        map<char, int> mp;
        int maxx = 0;
        int id = 0;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            while (mp[s[i]] > 2)
            {
                mp[s[id]]--;
                id++;
            }
            maxx = max(maxx, i - id + 1);
        }
        return maxx;
    }
};