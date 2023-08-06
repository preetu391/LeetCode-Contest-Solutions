#include <bits/stdc++.h>

using namespace std;

bool ok(vector<int> &nums, int l, int r, int m){
        int s=0;
        for(int i=l;i<=r;i++){
            s+=nums[i];
        }
        return s>=m;
}

bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size();
        vector<vector<bool>> dp(n,vector<bool> (n,true));
        
        for(int gap=2;gap<n;gap++){
            for(int i=0;i+gap<n;i++){
                int j=i+gap;
                bool ans_left = false, ans_right = false;
                if(ok(nums, i,j-1,m)) ans_left=(true)&&(dp[i][j-1]);
                if(ok(nums,i+1,j,m)) ans_right=(true)&&(dp[i+1][j]);
                dp[i][j] = ans_left || ans_right;
            }
        }
        return dp[0][n-1];
}
    
int main(){
    return 0;
}