#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution
{
public:
    string getSmallestString(string s, int k)
    {
        int n = s.length();
        string t = s;
        for (int i = 0; i < s.size(); i++)
        {
            for (char ch = 'a'; ch <= 'z'; ++ch)
            {
                int dist = min(abs(s[i] - ch), 26 - abs(s[i] - ch));
                if (dist <= k)
                {
                    t[i] = ch;
                    k -= dist;
                    break;
                }
            }
        }
        return t;
    }
};