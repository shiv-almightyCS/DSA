#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int cnt=0;
    cout<<"hi";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                if(arr[i]/arr[j]>=1 && arr[i]%arr[j]==0)
                    cnt++;
            }else{
                if(arr[j]/arr[i]>=1 && arr[j]%arr[i]==0)
                    cnt++;
            }
        }
    }
    cout<<cnt;
}