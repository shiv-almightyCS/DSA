#include<bits/stdc++.h>
using namespace std;

vector<int> sumOfMaximumAndMinimumOfWindowK(vector<int>& nums, int k){
    deque<int> maxi;
    deque<int> mini;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(!maxi.empty() && maxi.front()==i-k) maxi.pop_front();
        if(!mini.empty() && mini.front()==i-k) mini.pop_front();
        while(!maxi.empty() && nums[maxi.back()]<nums[i]) maxi.pop_back();
        while(!mini.empty() && nums[mini.back()]>nums[i]) mini.pop_back();
        maxi.push_back(i);
        mini.push_back(i);
        if(i>=k-1) ans.push_back(nums[maxi.front()]+nums[mini.front()]);
    }
    return ans;
}

vector<int> maxSlidingWindow(vector<int>& nums, int k){
    deque<int> dq;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(!dq.empty() && dq.front()==i-k) dq.pop_front();
        while(!dq.empty() && nums[dq.back()]<nums[i]) dq.pop_back();

        dq.push_back(i);
        if(i>=k-1) ans.push_back(nums[dq.front()]);
    }
    return ans;
}

int main(){
    vector<int> nums={2, 5, -1, 7, -3, -1, -2};
    // vector<int> ans=maxSlidingWindow(nums,3);
    vector<int> ans=sumOfMaximumAndMinimumOfWindowK(nums,4);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}