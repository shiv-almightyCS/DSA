#include<bits/stdc++.h>
using namespace std;

int maxCoin(vector<int> coins,int k){
    vector<int> dp(k+1,0);
    dp[0]=1;
    for(int coin:coins){
        for(int i=coin;i<=k;i++){
            dp[i]+=dp[i-coin];
        }
    }
    return dp[k];
}

int minCoins(vector<int> v,int k,vector<int>& dp){
    if(k==0) return 0;
    int ans=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(k-v[i]>=0){
            int subAns=0;
            if(dp[k-v[i]]!=-1) subAns=dp[k-v[i]];
            else subAns=minCoins(v,k-v[i],dp);
            if(subAns!=INT_MAX && subAns+1<ans)
                ans=subAns+1;
        }
    }
    dp[k]=ans;
    if(ans>=INT_MAX)
        return -1;
    return ans;
}

int main(){
    vector<int> coins={1,4,6};
    int n=8;
    vector<int> dp(n+1,-1);
    dp[0]=0;
    // int ans=minCoins(v,n,dp);
    // cout<<ans<<endl;
    // for(int x:dp){
    //     cout<<x<<" ";
    // }
    // cout<<maxCoin(v,8);
    
}