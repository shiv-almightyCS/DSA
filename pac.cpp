#include<bits/stdc++.h>

using namespace std;

vector<int> maxset(vector<int> &A) {
    vector <pair<vector<int>,long long int>> p;
    int index=0,i;
    while(index<A.size()){
        vector<int> subarray;
        long long int sum=0;
        for(i=index;A[i]>0;i++){
            subarray.push_back(A[i]);
            sum+=A[i];
            if(i==A.size()-1) break;
        }
        index=i+1;
        p.push_back(make_pair(subarray,sum));
    }
    long long int max=0;
    int ind;
    for(int j=0;j<p.size();j++){
        if(p[j].second>max){
            max=p[j].second;
            ind=j;
        }
    }
    return p[ind].first;
}

int main(){
    vector<int> v={-1, -1, -1, -1, -1};
    vector<int> ans=maxset(v);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}