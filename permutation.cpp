#include<bits/stdc++.h>
using namespace std;

// void solve(string ans,int n,int k){
//     int temp=n;
//     vector<int> digit={1,2,3,4,5,6,7,8,9};
//     vector<int> fact={1,1,2,6,24,120,720,5040,40320,362880};
//     cout<<n<<endl;
//     if(n==1){
//         ans+=to_string(digit[1]);
//         return;
//     }
//     for(int i=1;i<temp+1;i++){
//         if(k<=i*fact[n-1]){
//             ans+=to_string(digit[i]);
//             digit.erase(digit.begin()+i-1);
//             cout<<ans<<endl;
//             solve(ans,n-1,k/fact[n-1]);
//         }
//     }
    
// }

// int main(){
//    string ans="";
//    int n=4,k=14;
//     int temp=n;
//     vector<int> digit={1,2,3,4};
//     vector<int> fact={1,1,2,6,24,120,720,5040,40320,362880};
//     // cout<<n<<endl;
//     for(int j=0;j<4;j++){
//         for(int i=0;i<digit.size();i++){
//             if(n==1){
//                 ans+=to_string(digit[1]);
//                 // digit.erase(digit.begin()+1);
//             }
//             if(k<=digit[i]*fact[n-1]){
//                 ans+=to_string(digit[i]);
//                 digit.erase(digit.begin()+i);
//                 k=k/fact[n-1];
//                 n--;
//                 break;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }

void solve1(string str,int index,vector<string>& ans){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        cout<<"before"<<endl;
        cout<<"index="<<index<<endl;
        cout<<"i="<<i<<endl;
        solve1(str,index+1,ans);
        cout<<"after"<<endl;
        cout<<"index="<<index<<endl;
        cout<<"i="<<i<<endl;
    }
}

vector<string> stringPermutation(string str){    //Permutations of elements of string 
    int index=0;
    vector<string> ans;
    
    solve1(str,index,ans);
    return ans;
}

// void solve2(vector<int> nums,int index,vector<vector<int>>& ans){
//     if(index>=nums.size()){
//         ans.push_back(nums);
//         return;
//     }
//     for(int i=index;i<nums.size();i++){
//         swap(nums[index],nums[i]);
//         solve2(nums,index+1,ans);
//     }
// }

// vector<vector<int>> arrayPermutation(vector<int>& nums){    //Permutations of element of array
//     int index=0;
//     vector<vector<int>> ans;
    
//     solve2(nums,index,ans);
//     return ans;



// }

int main(){
    string str="123";
    vector<string> ans=stringPermutation(str);
    // vector<int> nums={1,2,3,4};
    // vector<vector<int>> ans=arrayPermutation(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<4;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    // for(int j=0;j<4;j++)
    //         cout<<ans[14][j]<<" ";
    //     cout<<endl;

}