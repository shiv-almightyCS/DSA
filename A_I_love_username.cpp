#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int cnt=0;
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i-1]<arr[i]){
            cnt++;
        }
    }
    if(n==2)
        cout<<2<<endl;
    else    cout<<cnt<<endl;
}