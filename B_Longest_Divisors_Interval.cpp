#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int count=0;
        while(a%b!=0){
            a=a+1;
            count++;
        }
        cout<<count<<endl;
    }
}