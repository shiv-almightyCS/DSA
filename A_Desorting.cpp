#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=3999;
    string str="";
    string roman[20]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int num[20]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    for(int i=0;x!=0;i++){
        int digit=x/num[i];
        while(digit!=0){
            str=str+roman[i];
            digit--;
        }
        x=x%num[i];
    }    
    cout<<str<<endl;
}