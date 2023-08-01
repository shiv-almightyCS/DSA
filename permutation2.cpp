#include<bits/stdc++.h>
using namespace std;

void solve2(vector<int> nums,int index,vector<vector<int>>& ans){
    if(index>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve2(nums,index+1,ans);
    }
}

vector<vector<int>> arrayPermutation(vector<int>& nums){    
    int index=0;
    vector<vector<int>> ans;
    
    solve2(nums,index,ans);
    return ans;
}

int main(){
    int n=4;
    vector<int> nums;
    for(int i=1;i<=4;i++){
        nums.push_back(i);
    }
    vector<vector<int>> ans=arrayPermutation(nums);
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<4;j++)
    //         cout<<ans[i][j]<<" ";
    //     cout<<endl;
    // }

    for(int j=0;j<4;j++)
            cout<<ans[14][j]<<" ";
        cout<<endl;

}