#include <bits/stdc++.h>
using namespace std;

string finalString(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(ans.begin(),ans.end());
            }else{
                ans+=s[i];
            }
        }
        return ans;
}

int main(){
    string s="abciahji";
    finalString(s);
    return 1;
}