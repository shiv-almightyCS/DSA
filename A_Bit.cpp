#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=0;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        (s[1]=='+')?x++:x--;
    }
    cout<<x<<endl;
}