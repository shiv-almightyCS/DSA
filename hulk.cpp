#include<bits/stdc++.h>
using namespace std;

string solve(int n){
    if(n==1)
        return "I hate";
    // if(n==2)
    //     return solve(n-1)+" I love it";
    if(n%2==0)
        return solve(n-1)+" that I love";
    else{
        return solve(n-1)+" that I hate";
    }
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n)+" it";
}