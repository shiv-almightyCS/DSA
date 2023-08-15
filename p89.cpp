#include<bits/stdc++.h>
using namespace std;

int solve(int n,int m){
    int cnt=0;
    while((n&1)==(m&1)){
        n>>=1;
        m>>=1;
        cnt++;
    }
    return cnt+1;
}

int main(){
    // unsigned char num=3;
    // unsigned char res=0;
    // for(int i=0;i<8;i++){
    //     res=((res<<1)|(num&1));
    //     num>>=1;
    // }
    // cout<<static_cast<int>(res)<<endl;
    cout<<solve(11,9)<<endl;
}