#include<bits/stdc++.h>
using namespace std;
int check(vector<int> nums,int target){
    int s=0,e=nums.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
                
            }
            else{
                return m+1;
            }
        } 
}
int main(){
    // int arr[]={1,3,5,6};
    vector<int> nums={-1,0,3,5,9,12};
    int val=9;
    // int s=0,e=3;
    int x=check(nums,val);
    cout<<x;
    // while(s<=e){
    //     int m=(s+e)/2;
    //     if(arr[m]==val){
    //         cout<<m<<endl;
    //         break;
    //     }
    //     else if(arr[m]>val)
    //         s=m+1;
    //     else if(arr[m]<val)
    //         e=m-1;
    //     else {  
    //         cout<<m+1;
    //         break;
    //     }
    // }
    // double ans=98765432123456789;
    // int x=int(ans)%10;
    // cout<<x;
    // vector<int> digits={1,2,3};
    // int ans=0;
    // for(int i=0;i<digits.size();i++)
    //     ans = ans*10+digits[i];
    // ans+=1;
    // // cout<<ans;
    // vector<int> ans2;

    // while(ans!=0){
    //     ans2.push_back(ans%10);
    //     ans/=10;
    // }
    // // reverse(digits.begin(),digits.end());
    // reverse(ans2.begin(),ans2.end());
    // for(int i=0;i<ans2.size();i++)
    //     cout<<ans2[i]<<" ";

}