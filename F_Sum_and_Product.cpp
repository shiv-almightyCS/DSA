#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int q;
        cin>>q;
        int x[q],y[q];
        for(int k=0;k<q;k++){
            cin>>x[k]>>y[k];
                int cnt;
            for(int i=0;i<n-1;i++){
                cnt=0;
                for(int j=i;j<n;j++){
                    if((arr[i]+arr[j]==x[i])&&(arr[i]*arr[j]==y[i]))
                        cnt++;
                }
            }
            cout<<cnt<<" ";
            // cout<<endl;
        }
    }
}