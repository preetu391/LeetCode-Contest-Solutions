#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        int low=0,high=1e9;
        int mx=0;
        while(low<=high){
            int mid=low+((high-low))/2;
            int x=number_of_points(points,s,mid);
            if(x==-1){
                high=mid-1;
            }else{
                mx=max(x,mx);
                low=mid+1;
            }
        }
        return mx;
    }
    int number_of_points(vector<vector<int>>& points, string s, int mid){
        int a=abs(mid), b=-(abs(mid));
        int n=points.size();
        unordered_set<char> st;
        for(int i=0;i<n;i++){
            if((points[i][0]>=b&&points[i][0]<=a)&&(points[i][1]<=a&&points[i][1]>=b)){
                if(st.find(s[i])==st.end()){
                    st.insert(s[i]);
                }else{
                    return -1;
                }
            }
        }
        return st.size();
    }
};
