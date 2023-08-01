#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>>& m,vector<vector<int>> visited){
    if((x>=0 && x<n) && (y>=0 && y<n) && m[x][y]==1 && visited[x][y]==0)
        return true;
    return false;
}

void solve(vector<vector<int>>& m,int n,vector<vector<int>> visited,int x,int y,vector<string>& ans,string path){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;

    //Recursive call for down
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,m,visited)){
        path.push_back('D');
        solve(m,n,visited,newx,newy,ans,path);
        path.pop_back();
    }

    //Recursive call for left
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,n,m,visited)){
        path.push_back('L');
        solve(m,n,visited,newx,newy,ans,path);
        path.pop_back();
    }

    //Recursive call for right
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,m,visited)){
        path.push_back('R');
        solve(m,n,visited,newx,newy,ans,path);
        path.pop_back();
    }

    //Recursive call for up
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,m,visited)){
        path.push_back('U');
        solve(m,n,visited,newx,newy,ans,path);
        path.pop_back();
    }
}

vector<string> maze(vector<vector<int>>& m,int n){
    vector<string> ans;
    if(m[0][0]==0)
        return ans;
    vector<vector<int>> visited= m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }

    int x=0;
    int y=0;
    string path="";
    solve(m,n,visited,x,y,ans,path);

    sort(ans.begin(),ans.end());
    return ans;

}


int main(){
    vector<vector<int>> m={{1, 0, 0, 0},
                            {1, 1, 0, 1}, 
                            {1, 1, 0, 0},
                            {0, 1, 1, 1}};
    int n=4;
    vector<string> ans=maze(m,n);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";

}