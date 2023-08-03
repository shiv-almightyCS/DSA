#include<bits/stdc++.h>
using namespace std;
#define ll long long
// int main(){
//     ll t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         set<ll> b;
//         ll x,l=0;
//         ll s=(1+n)*n/2;
//         for(int i=1;i<n;i++){
//             cin>>x;
//             if(x-l<=n)
//                 b.insert(x-l);
//             l=x;
//         }
//         if(b.size()==n-2+(x!=s))
//             cout<<"YES"<<endl;
//         else
//             cout<<"NO"<<endl;
//     }
//     return 0;
// }

int main(){
    vector<int> v={7,2,5,10,8};
    int l=*max_element(v.begin(),v.end());
    int r=accumulate(v.begin(), v.end(), 0);
    while(l<=2){
        int mid=l+(r-l)/2;
    }
}