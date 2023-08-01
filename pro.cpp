#include<bits/stdc++.h>
using namespace std;

 int numberOfGoodSubarraySplits(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                count++;
        }
        if(count==0 || count==1)
            return count;
        int first,last;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                first=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i++){
            if(nums[i]==1){
                last=i;
                break;
            }
        }
        int ans=1;
        int zeros=0;
        for(int i=first+1;i<=last;i++){
            
            if(nums[i]==0){
                zeros++;
            }else if(nums[i]==1){
                cout<<"hi";
                ans = ans*(zeros+1);
                zeros=0;
            }
        }
        return ans;
    }

// void solve(string str,string output,int index,vector<string>& ans){
//     if(index>=str.length()){
//         ans.push_back(output);
//         return;
//     }
//     //exclude
//     solve(str,output,index+1,ans);
//     char element=str[index];
//     // output+=element;
//     output.push_back(element);
//     solve(str,output,index+1,ans);
// }


int main(){
    // string str="abc";
    // vector<string> ans;
    // string output="";
    // int index=0;
    // solve(str,output,index,ans);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    vector<int> ans={0,1,0,0,1};
    cout<<numberOfGoodSubarraySplits(ans);
}