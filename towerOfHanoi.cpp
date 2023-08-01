#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,int A=1,int B=2,int C=3){
    if(n>0){
        towerOfHanoi(n-1,A,C,B);
        cout<<"Move a disk from "<<A<<" to "<<C<<endl;
        towerOfHanoi(n-1,B,A,C);
    }
}
int main(){
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;
    towerOfHanoi(n);
}