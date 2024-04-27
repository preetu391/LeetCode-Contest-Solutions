#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeSquare(vector<vector<char>> &arr)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                int w = (arr[i][j] == 'W') + (arr[i][j + 1] == 'W') + (arr[i + 1][j] == 'W') + (arr[i + 1][j + 1] == 'W');
                int b = (arr[i][j] == 'B') + (arr[i][j + 1] == 'B') + (arr[i + 1][j] == 'B') + (arr[i + 1][j + 1] == 'B');
                if (max(w, b) >= 3)
                {
                    return true;
                }
            }
        }
        return false;
    }
};