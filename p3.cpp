#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> v2;

    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(i!=j && i!=k && j!=k && (nums[i]+nums[j]+nums[k]==0)){
                    // v1.push_back(nums[i]);
                    // v1.push_back(nums[j]);
                    // v1.push_back(nums[k]);
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                }
                // v2.push_back(v1);  
            }
        }
    }
}