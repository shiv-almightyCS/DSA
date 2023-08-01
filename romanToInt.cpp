#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    map<char,int> roman={{'I',1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D',500},{'M', 1000}};
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(i+1<s.size() && roman[s[i]]<roman[s[i+1]]){
            ans=ans-roman[s[i]];
        }else{
            ans=ans+roman[s[i]];
        }
    }
    return ans;
}

int main(){
    cout<<romanToInt("MDCCCLXXXIV");
}