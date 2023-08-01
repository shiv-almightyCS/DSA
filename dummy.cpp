#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string b;
        cin>>b;
        string a="";
        for(int i=0;i<b.length();i++){
            if(i%2==0)
                a=a+b[i];
        }
        cout<<a+b[b.length()-1]<<endl;
    }
}