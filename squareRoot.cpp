#include<bits/stdc++.h>
using namespace std;

int binarySearch(int n){
    int s=0,e=n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n)
            return mid;
        if(square>n)
            e=mid-1;
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecise(int n,int p,int temp){
    double fact=1;
    double ans=temp;
    for(int i=0;i<p;i++){
        fact=fact/10;
        for(double j=ans;j*j<n;j=j+fact){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n=19;
    int temp=binarySearch(n);
    int p=10;
    // cout<<temp<<endl;
    cout<<morePrecise(n,p,temp)<<endl;
}
