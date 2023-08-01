#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[5]={1,2,3,4,5};
    // int start=2;
    // int end=4;
    // while(start<=end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    
    // for(int i=0;i<5;i++)
    //     cout<<arr[i]<<" ";
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.length();
    if(k>n){ 
            reverse(s.begin(),s.end());
    }else{
        for(int i=0;i<s.length();i=i+2*k){
            int start=i;
            int end=i+k-1;
            if(end>n)
                end=n;
            while(start<=end){
                swap(s[start++],s[end--]);
            }
        }
    }
    cout<<s<<endl;
}