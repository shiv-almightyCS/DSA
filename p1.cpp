#include<bits/stdc++.h>
using namespace std;


int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e){
        if(arr[mid]>=arr[0])
            s=mid+1;
        else   
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
    
}

int firstOccurance(int arr[],int n,int k){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }else if(arr[mid]>k)
            e=mid-1;
        else if(arr[mid]<k)
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccurance(int arr[],int n,int k){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }else if(arr[mid]>k)
            e=mid-1;
        else if(arr[mid]<k)
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    // int arr[11]={1,2,2,2,2,3,3,3,3,5,5};
    int arr[5]={3,8,10,17,1};
    // vector<int> v={1,2,2,2,2,3,3,3,3,5,5};
    // cout<<accumulate(v.begin(),v.end(),0);
    // cout<<firstOccurance(arr,11,2)<<endl;
    // cout<<lastOccurance(arr,11,2)<<endl;
    cout<<getPivot(arr,5);
}