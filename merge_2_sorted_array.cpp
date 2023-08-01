#include<bits/stdc++.h>
using namespace std;


vector<int> merge(vector<int> &v1,vector<int> &v2){
    vector<int> ans;
    int i=0,j=0;
    while(i<v1.size() || j<v2.size()){
        if(v1[i]<=v2[j]){
            ans.push_back(v1[i]);
            i++;
        }else{
            ans.push_back(v2[j]);
            j++;
        }
    }
    while(i<v1.size()){
        ans.push_back(v1[i]);
        i++;
    }
    while(j<v2.size()){
        ans.push_back(v2[j]);
        j++;
    }
    return ans;
}

void solve(int cl,int cr,int n){
    if(cl!=0 && cr!=0){
        if()
    }
}

int  main(){
    // vector<int> v1={1,2};
    // vector<int> v2={3,4};
    // vector<int> v=merge(v1,v2);
    // if(v.size()==1)
    //     return v[0];
    // if(v.size()%2!=0)
    //     cout<<v[v.size()/2]<<endl;
    // else{
    //     int mid=v.size()/2;
    //     cout<<v[mid]<<" "<<v[mid-1]<<endl;
    //     double ans=double(v[mid]+v[mid-1])/2;
    //     cout<<ans<<endl;
    // }
    int n;
    cin>>n;
    
}