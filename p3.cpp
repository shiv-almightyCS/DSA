#include<bits/stdc++.h>
using namespace std;

string reverseStr(string str){
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        if(str[i]=='1')
            str[i]='0';
        else str[i]='1';
    }
    return str;
}

string generateString(int n,string ans){

    if(n==1){
        return "0";
    }
    ans=ans+generateString(n-1,ans)+"1"+reverseStr(generateString(n-1,ans));
    return ans;
}

vector<int> countBits(int n){
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-pow(2,floor(log2(i)))]+1;
    }
    return dp;
}

int main(){
    vector<int> ans=countBits(5);
    for(auto i:ans){
        cout<<i<<" ";
    }
    // string ans=generateString(4,"");
    // cout<<ans;
}