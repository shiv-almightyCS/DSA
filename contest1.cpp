#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums,int target){
    int i=0;
    int j;
    int c=0;
    j=i+1;
    while(i<nums.size()-1 && j<nums.size()){
        cout<<c<<endl;
        if((-target)<=nums[j]-nums[i] && nums[j]-nums[i]<=target){
            c++;
            i=j;
            j=i+1;
        }else{
            j++;
        }
        // if(j>nums.size())
        //     return -1;
    }
    
    return c;
}


int main(){

    // vector<int> nums={1,3,6,4,1,2};
    vector<int> nums={0,1};
    cout<<solve(nums,3);
}