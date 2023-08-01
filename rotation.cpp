#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> leftRotationsOfArray(vector<int> nums, vector<int> queries) {
    vector<vector<int>> v1;
    for(int k=0;k<queries.size();k++){
        int r=queries[k]%nums.size();
        vector<int> v2(nums.size());
        int j=0;
        for(int i=r;i<nums.size();i++){
            v2[j]=nums[i];
            j++;
        }
        for(int i=0;i<r;i++){
            v2[j]=nums[i];
            j++;
        }
        v1.push_back(v2);
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return v1;
}
void rotate(vector<int>& nums,int k){
    // int r=(nums.size()+k)%nums.size();
    vector<int> ans(nums.size());
    // int j=0;
    for(int i=0;i<nums.size();i++){
        ans[(i+k)%nums.size()]=nums[i];
        // j++;
    }
    // for(int i=0;i<r;i++){
    //     ans[j]=nums[i];
    //     j++;
    // }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    // vector<int> v1={15 ,16 ,8 ,13, 19 };
    // vector<int> v1={-1,-100,3,99};
    vector<int> v1={1,2,3,4,5,6,7};
    vector<int> v2={1 ,2, 6 };
    // vector<int> nums={15 ,16 ,8 ,13, 19 };
    // vector<int> queries={1 ,2, 6 };
    // vector<vector<int>> v3=leftRotationsOfArray(v1,v2);
    rotate(v1,3);
    // vector<vector<int>> v1;
    // for(int k=0;k<queries.size();k++){
    //     int r=((queries[k]%nums.size()));
        
    //     vector<int> v2(nums.size());
    //     int j=0;
    //     for(int i=r;i<nums.size();i++){
    //         v2[j]=nums[i];
    //         j++;
    //     }
    //     for(int i=0;i<r;i++){
    //         v2[j]=nums[i];
    //         j++;
    //     }
    //     v1.push_back(v2);
    //     for(int i=0;i<v2.size();i++){
    //         cout<<v2[i]<<" ";
    //     }
    //     cout<<endl;
    // }

}