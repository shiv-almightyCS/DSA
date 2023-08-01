#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m,int mid){
    int pCoutn=1;
    int blockSum=0;
    for(int i=0;i<n;i++){
        if(blockSum+arr[i]<=mid){
            blockSum+=arr[i];
        }else{
            pCoutn++;
            if(pCoutn>m || arr[i]>mid){
                return false;
             }
            blockSum=arr[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    if(boards.size()<k)
        return -1;
    int s=0;
    int sum=0;
    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        cout<<"mid="<<mid<<endl;
        if(isPossible(boards,boards.size(),k,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        cout<<"s="<<s<<" "<<"e="<<e<<endl;
        cout<<"ans="<<ans<<endl;
        mid=s+(e-s)/2;
        // cout<<"mid="<<mid<<endl;
    }
    return ans;
    
}

int main(){
    vector<int> v={48,90};
    cout<<findLargestMinDistance(v,2);

}