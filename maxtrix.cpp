#include<bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>>& mat){
    int sum=0;
    if(mat.size()==0)
        return sum;
    for(int i=0;i<mat.size();i++){
        sum+=mat[i][i];
        sum+=mat[i][mat.size()-i-1];
    }
    if(mat.size()%2==1){
        sum-=mat[mat.size()/2][mat.size()/2];
    }
    return sum;
}

int main(){

    vector<vector<int>> mat={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout<<diagonalSum(mat);

}