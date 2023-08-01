#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char str[8][8];
        string ans="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>str[i][j];
                if(isalpha(str[i][j])){
                    ans=ans+str[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
}