#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> v){
    return sort(v.begin()+2,v.begin()+2+4);
}


int main(){
    vector<int> v={1,2,3,4,5};
    vector<int> ans=solve(v);
}