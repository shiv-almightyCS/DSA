#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n];
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];
    }
    double ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
}