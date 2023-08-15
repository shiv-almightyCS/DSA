#include<bits/stdc++.h>
using namespace std;

// int solve(vector<int> v,int n,int k){
//     int i=0,j=0;
//     int max=INT_MIN;
//     int sum=0;
//     while(j<n){
//         sum+=v[j];
//         if(j-i+1<k){
//             j++;
//         }else{
//             if(sum>max)
//                 max=sum;
//             sum-=v[i];
//             i++;
//             j++;
//         }
//     }
//     return max;
// }
// int solve(string s){
//     int j=0;
//     int n=s.size();
//     int cnt=0;
//     while(j<n-2){
//         if(s[j]!=s[j+1] && s[j]!=s[j+2] && s[j+1]!=s[j+2])
//             cnt++;
//         j++;
//     }
//     return cnt;
// }
vector<int> firstNegativeNum(vector<int> v,int k){
    vector<int> ans;
    int flag=0;
    for(int i=0;i<v.size()-k+1;i++){
        for(int j=i;j<i+k;j++){
            if(v[j]<0){
                ans.push_back(v[j]);
                flag=1;
                break;
            }
        }
        if(!flag){
            ans.push_back(0);
        }else{
            flag=0;
        }
    }
    return ans;
}
vector<long long> firstNegative(vector<long long> v,long long  n,long long k){ //using queue
    deque<long long> de;
    vector<long long> ans;
    for (int i=0;i<k;i++){
        if(v[i]<0){
            de.push_back(i);
        }    
    }
    if(de.size()>0){
        ans.push_back(v[de.front()]);
    }else{
        ans.push_back(0);
    }

    for(int i=k;i<n;i++){
        if(!de.empty() && i-de.front()>=k){
            de.pop_front();
        }
        if(v[i]<0){
            de.push_back(i);
        }  
        if(de.size()>0){
            ans.push_back(v[de.front()]);
        }else{
            ans.push_back(0);
        }
    }
    return ans;
}
int solve(vector<int> v,int x){  
    int n=v.size();
    int i=0,j=0;
    int sum=0;
    int maxlen=0;
    while(j<n){
        sum+=v[j];
        if(sum<x)
            j++;
        else if(sum>x){
            while(sum>x){
                sum-=v[i];
                i++;
            }
            if(sum==x)
                maxlen=max(maxlen,j-i+1);
            j++;
        }else{
            maxlen=max(maxlen,j-i+1);
            j++;
        }
    }
    return maxlen;
}
int main(){
    // vector<int> v={1,2,3,4,5,-3};
    // vector<int> v={76, 35, 12, 90, 28, 62, 42, 71, 19, 58};
    vector<long long> v={5,-8,-7,3,1,11,1,-2,2,-1};

    // cout<<solve(v,6,3);
    // string s="aababcabc";
    // cout<<solve(v,15);
    vector<long long> ans=firstNegative(v,v.size(),2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    // int x=1e+009;
    // cout<<x;
}



