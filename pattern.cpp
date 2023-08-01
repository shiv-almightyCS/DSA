#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int getMax(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int getMin(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}
int main(){
    // for(int i=1;i<=4;i++){
        // for(int k=4-i+1;k>0;k--){
        //     cout<<" ";
        // }
        // int value=i;
        // for(int j=1;j<=i;j++){
        //     cout<<i-j+1;
            // cout<<i+j-1;
            // cout<<value;
            // value+=1;
            // cout<<"*";
        // }
        // cout<<endl;
        // cout<<"\n";
    // }

    int arr[5]={6, 2, 8, 4, 10};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    // int ans=0,ans1=0;
    // for(int i=0;i<5;i++){
    //     ans=ans^arr[i];
    //     ans1=ans1^i;
    // }
    // ans=ans^ans1;
    // cout<<ans;
    // int ans=0;
    // for(int i=0;i<5;i++){
    //     ans = ans^arr[i];
    // }
    // cout<<ans;
    // reverse(arr,10);
    // int max=INT_MIN,min=INT_MAX;
    // for(int i=0;i<5;i++){
    //     if(max<arr[i])
    //         max=arr[i];
    // }
    // for(int i=0;i<5;i++){
    //     if(min>arr[i])
    //         min=arr[i];
    // }
    // cout<<"Max="<<max<<endl<<"Min="<<min<<endl;
    // cout<<"Max="<<getMax(arr,10)<<endl<<"Min="<<getMin(arr,10)<<endl;
}