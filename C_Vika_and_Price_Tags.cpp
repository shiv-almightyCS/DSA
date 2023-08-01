#include<bits/stdc++.h>
using namespace std;
string solve(vector<int> &a,vector<int> &b){
    int n;
    cin>>n;
    vector<int> a,b,c(n,0);
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
        c[i]=abs(a[i]-b[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            return solve(b,c);
    }
    return "yes";
}
int main(){
    //  int t;
    //  cin>>t;
    //  while(t--){
        cout<<solve()
    //  }
}