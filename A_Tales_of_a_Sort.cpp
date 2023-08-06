#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max=0;
        cin>>arr[0];
        for(int i=1;i<n;i++){
                cin>>arr[i];
                if(arr[i]<arr[i-1] && arr[i]>max){
                    max=arr[i-1];
                }
        }
      
       cout<<max<<endl;
    }
}