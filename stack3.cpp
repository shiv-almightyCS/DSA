#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    st.push(-1);
    map<int,int> m;
    for(int i=nums2.size()-1;i>=0;i++){
        int curr=nums2[i];
        while(st.top()<=curr){
            st.pop();
        }
        m.insert({curr,st.top()});
        st.push(curr);
    }
    for(int i=0;i<nums2.size();i++){
        cout<<m[nums2[i]]<<" ";
    }
    int n=nums1.size()-1;
    vector<int> ans(n,0);
    for(int i=0;i<nums1.size();i++){
        ans[i]=m[nums1[i]];
    }
    return ans;
}

int main(){
    vector<int> v1={4,1,2};
    vector<int> v2={1,3,4,2};
    vector<int> ans=nextGreaterElement(v1,v2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}