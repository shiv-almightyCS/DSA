#include<bits/stdc++.h>
using namespace std;

long long int fact(long long n){
    long long f[n+1];
    f[0]=1;
    f[1]=1;
    int x=1e9+7;
    for(int i=2;i<=n;i++){
        f[i]=(i*f[i-1])%x;
    }
    // long long int y=f[n]%x;
    return f[n];
}

int main(){
    long long x=fact(2*11);
    long long y=fact(12);
    long long z=fact(11);
    // cout<<x<<" "<<y<<" "<<z;
    cout<<x/(y*z);
    // int x=1e9+7;
    // cout<<x;

}