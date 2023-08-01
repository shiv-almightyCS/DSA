#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmaller(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int>& heights) {
    int n=heights.size();
    vector<int> next(n);
    next=nextSmaller(heights,n);
    vector<int> prev(n);
    prev=prevSmaller(heights,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++){
        int l=heights[i];
        if(next[i]==-1)
            next[i]=n;
        int b=next[i]-prev[i]-1;
        int newArea=l*b;
        area=max(area,newArea);
    }
    return area;
}
int main(){
    vector<vector<char>> matrix={{'0','0','1','0'},{'0','0','1','0'},{'0','0','1','0'},{'0','0','1','1'},{'0','1','1','1'},{'0','1','1','1'},{'1','1','1','1'}};
    int n=matrix.size();
    int m=matrix[0].size();
    // cout<<n<<endl;
    // cout<<m<<endl;
    vector<int> hist(m);
    for(int i=0;i<matrix[0].size();i++)
        hist[i]=int(matrix[0][i]-'0');
    int area=largestRectangleArea(hist);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]!='0')
                hist[j]=int(matrix[i][j]-'0')+int(matrix[i-1][j]-'0');
            else
                hist[j]=0;
        }
        area=max(area,largestRectangleArea(hist));
        cout<<area;
    }
    // cout<<area;
}