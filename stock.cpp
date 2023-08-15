#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int l=0,r=1;
    int maxP=0;
    while(r<prices.size()){
        if(prices[r]>prices[l]){
            int profit=prices[r]-prices[l];
            maxP=max(maxP,profit);
        }else{
            l++;
        }
        r++;
    }
    return maxP;
}

int solve(vector<vector<int>>& obstacleGrid,int r,int d,int cnt){
    if(obstacleGrid[d][r]==1)
        return cnt;
    cout<<cnt;
    int cnt1=solve(obstacleGrid,r+1,d,cnt+1);
    int cnt2=solve(obstacleGrid,r,d+1,cnt+1);
    return min(cnt1,cnt2);
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
    int right=0,down=0;
    if(obstacleGrid[down][right]==1)
        return 0;
    cout<<"hi";
    int cnt1=solve(obstacleGrid,right+1,down,1);
    int cnt2=solve(obstacleGrid,right,down+1,1);
    return min(cnt1,cnt2);
}

int main(){
    // vector<int> prices={7,1,5,3,6,4};
    // cout<<maxProfit(prices);
    // map<char,int> m;
    // m['a']++;
    // cout<<m['a']<<endl;
    // m['a']--;
    // cout<<m.erase('a')<<endl;
    // cout<<m.size()<<endl;
    vector<vector<int>> obstacleGrid={{0,0,0},{0,1,0},{0,0,0}};
    cout<<uniquePathsWithObstacles(obstacleGrid);
}