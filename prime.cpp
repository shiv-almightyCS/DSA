#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    if(n>2 && n%2==0) return false;
    if(n>3 && n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0)
            return false;
        if(n%(i+2)==0)
            return false;
    }
    return true;
}

vector<int> sieve(int n){
    vector<int> ans(n+1,true);
    for(int i=2;i<=n;i++){
        if(ans[i]){
            for(int j=i*i;j<=n;j=j+i){
                ans[j]=false;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> ans=sieve(106);
    for(int i=2;i<ans.size();i++){
        if(ans[i]){
            cout<<i<<" ";
        }
    }
}