#include<bits/stdc++.h>
using namespace std;
void solve(vector<string>& ans,int n,string str,int oc,int cc){
    if(oc==n && cc==n){
        ans.push_back(str);
        return;
    }
    if(oc<n)
        solve(ans,n,str+"(",oc+1,cc);
    if(cc<oc)
        solve(ans,n,str+")",oc,cc+1);
}
vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string str="";
    solve(ans,n,str,0,0);
    return ans;
}

int main(){
    vector<string> ans=generateParenthesis(3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}