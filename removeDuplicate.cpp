#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> digits={9};

    //  if(digits[digits.size()-1]<9)
    //     digits[digits.size()-1]=digits[digits.size()-1]+1;

    // long long int d=0;
    // for(int i=0;i<digits.size();i++)
    //     d = d*10+digits[i];
    // cout<<d;
    // d+=1;

    // vector<int> ans;

    // while(d!=0){
    //     int x=d%10;
    //     ans.push_back(x);
    //     d/=10;
    // }
    // reverse(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++)
    //     cout<<ans[i]<<" ";

    // for(int i=0;i<digits.size();i++)
    //     cout<<digits[i]<<" ";
    vector<int> nums={4,1,2,1,2};
    int index=0;
        int i=0;
        while(i<nums.size()){
            // cout<<"jo";
            if(nums[index]==nums[i] && index!=i){
                index+=1;
                i=0;
            }else
                i++;
        }
        cout<<nums[index];
}