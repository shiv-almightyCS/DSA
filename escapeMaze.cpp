#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,vector<vector<char>>& maze,int r,int c,vector<vector<char>> visited,vector<int>& entrance){
    // cout<<x<<" "<<y<<endl;
    // cout<<r<<" "<<c<<endl;
    // cout<<maze[x][y]<<endl;
    if((x>=0 && x<r) && (y>=0 && y<c) && maze[x][y]=='.' && visited[x][y]=='.' && (x!=entrance[0] || y!=entrance[1]))
        return true;
    return false;
}

void solve(vector<vector<char>>& m,int r,int c,vector<vector<char>> visited,int x,int y,vector<string>& ans,string path,vector<int>& entrance){
    // if((x==r-1 && y==c-1)|| (x==0 && y==0) || (x==r-1 && y==0) || (x==0 && y==c-1)){
        // cout<<x<<" "<<y<<endl;
    if(x<0 || x>r-1 || y<0 || y>c-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]='+';

    //Recursive call for down
    int newx=x+1;
    int newy=y;

    if(isSafe(newx,newy,m,r,c,visited,entrance)){
        path.push_back('D');
        solve(m,r,c,visited,newx,newy,ans,path,entrance);
        path.pop_back();
    }

     //Recursive call for left
    newx=x;
    newy=y-1;
    
    if(isSafe(newx,newy,m,r,c,visited,entrance)){
        path.push_back('L');
        solve(m,r,c,visited,newx,newy,ans,path,entrance);
        path.pop_back();
    }

    //Recursive call for right
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,m,r,c,visited,entrance)){
        path.push_back('R');
        solve(m,r,c,visited,newx,newy,ans,path,entrance);
        path.pop_back();
    }

    //Recursive call for up
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,m,r,c,visited,entrance)){
        path.push_back('U');
        solve(m,r,c,visited,newx,newy,ans,path,entrance);
        path.pop_back();
    }
}

int maze(vector<vector<char>>& m,int r,int c,vector<int>& entrance){
    vector<string> ans;
    vector<vector<char>> visited= m;
    for(int i=0;i<visited.size();i++){
        for(int j=0;j<visited.size();j++){
            visited[i][j]='.';
        }
    }

    int x=entrance[0];
    int y=entrance[1];
    string path="";
    solve(m,r,c,visited,x,y,ans,path,entrance);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";

    // int len=INT_MAX-1;
    int len=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i].length()<len)
            len=ans[i].length();
            
    }
    return len;
}


int main(){
    vector<vector<char>> m={{'+','+','+'},
                            {'.','.','.'}, 
                            {'+','+','+'}};
    int r=m.size();
    int c=m[0].size();
    vector<int> entrance={1,0};
    int ans=maze(m,r,c,entrance);
    cout<<ans<<" ";

}














