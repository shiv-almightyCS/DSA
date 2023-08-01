#include<bits/stdc++.h>
using namespace std;
#define PI 3.14 //Macros  (At the time of compilation compiler replace all PI to 3.14)
#define Area(R) (PI*R*R)  //(At the time of compilation compiler replace all Area(R) to PI*R*R)

inline int getMax(int& a,int& b){ //if the function is of 1-2 line then use inline keyword
    return (a>b)?a:b;
}
int main(){
    int r=5;
    // cout<<"Area of circle is "<<Area(r); 
    int ans=0;
    int a=1,b=2;
    ans=getMax(a,b);  //at the time of compilation compiler replace getMax(a,b) to (a>b)?a:b
    cout<<ans;
    a=a+3;
    b+=1;
    ans=getMax(a,b);    //at the time of compilation compiler replace getMax(a,b) to (a>b)?a:b
    cout<<ans;

}