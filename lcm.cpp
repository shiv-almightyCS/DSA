#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

vector<int> divisor(int n){
    int i=2;
    vector<int> ans;
    while(i<n){
        if(n%i==0){
            ans.push_back(i);
        }
        i++;
    }
    return ans;
}

int main(){
    int  n=8;
    vector<int> divisors=divisor(n);
    // for(int i=0;i<divisors.size();i++)
    //     cout<<divisors[i]<<" ";
    int l=0;
    int r=divisors.size()-1;
    vector<int> ans;
    while(l<=r){
        int lc=lcm(divisors[l],divisors[r]);
        int gc=gcd(divisors[l],divisors[r]);
        if(lc/gc==n){
            ans.push_back(divisors[l]);
            ans.push_back(divisors[r]);
            break;
        }else{
            l++;
            r--;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}