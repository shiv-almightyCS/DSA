#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    vector<int> dp(mat.size());
    vector<vector<int>> ans;
    for(int i=0;i<mat.size();i++){
        if(mat[i][0]==0)
            dp[0]=0;
        else{
            dp[0]=1;
        }
        for(int j=1;j<mat[0].size();j++){
            if(mat[i][j]==0){
                dp[j]=0;
            }else{
                dp[j]=min(dp[j-1]+1,ans[i-1][j]+1);
            }
        }
        ans.push_back(dp);
    }
    return ans;
}

int main(){
    // vector<vector<int>> mat={{0,0,0},{0,1,0},{1,1,1}};
    vector<vector<int>> mat={{0,0,1,0,1,1,1,0,1,1},{1,1,1,1,0,1,1,1,1,1},{1,1,1,1,1,0,0,0,1,1},{1,0,1,0,1,1,1,0,1,1},{0,0,1,1,1,0,1,1,1,1},{1,0,1,1,1,1,1,1,1,1},{1,1,1,1,0,1,0,1,0,1},{0,1,0,0,0,1,0,0,1,1},{1,1,1,0,1,1,0,1,0,1},{1,0,1,1,1,0,1,1,1,0}};
    vector<vector<int>> ans=updateMatrix(mat);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}