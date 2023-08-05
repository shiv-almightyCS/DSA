#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     int b,c,h;
    //     cin>>b>>c>>h;
    //     cout<<2*min(b-1,c+h)+1<<endl;
    // }


    double findMedianSortedArrays(vector<int> &nums1,vector<int> &nums2){
        vector<int> a;
        vector<int> b;
        if(nums1.size()>nums2.size()){
            b=nums1;
            a=nums2;
        }else{
            a=nums1;
            b=nums2;
        }
        int total=a.size()+b.size();
        int half=total/2;
        int l=0;
        int r=a.size()-1;
        while(true){
            int i=l+(r-l)/2;
            int j=half-i-2;
            float aLeft,aRight,bLeft,bRight;
            (i>=0)? aLeft=a[i]:aLeft=numeric_limits<float>::infinity()*-1;
            ((i+1)<a.size())? aRight=a[i+1]:aLeft=numeric_limits<float>::infinity();
            (j>=0)? bLeft=b[j]:bRight=numeric_limits<float>::infinity()*-1;
            ((j+1)<b.size())? bRight=b[j+1]:bRight=numeric_limits<float>::infinity();

            if(aLeft<=bRight && bRight<=aLeft){
                if(total%2)
                    return min(aRight,bRight);
                return (max(aLeft,bLeft)+min(aRight,bRight))/2
            }else if(aLeft>bRight) r=i-1;
            else l=i+1;
        }
    }
}