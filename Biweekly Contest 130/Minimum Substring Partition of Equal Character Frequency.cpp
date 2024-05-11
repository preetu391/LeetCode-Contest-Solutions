#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(int i, string &s,vector<int> &dp) {
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int freq[26]={0};
        int ans=1e5;
        for (int j=i;j>=0;j--) {
            freq[s[j]-'a'] += 1;
            int minx = 1e5, maxx = 0;
            for (int k=0;k<26;k++) {
                if (freq[k]) {
                    minx=min(minx,freq[k]);
                    maxx=max(maxx,freq[k]);
                }
            }
            if (minx==maxx){
                ans=min(ans, 1+helper(j-1, s,dp));
            }
        }
        return dp[i]=ans;
    }
    int minimumSubstringsInPartition(string s) {
        int n=s.length();
        vector<int> dp(n,-1);
        return helper(s.length()-1,s,dp);
    }
};