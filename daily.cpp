#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int l=0,r=matrix.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(matrix[mid][0]>target)
            r=mid-1;
        else if(matrix[mid][matrix[mid].size()-1]<target)
            l=mid+1;
        else{
            int ml=0,mr=matrix[mid].size()-1;
            while(ml<=mr){
                int m=ml+(mr-ml)/2;
                if(matrix[mid][m]==target)
                    return true;
                if(matrix[mid][m]<target)
                    ml=m+1;
                else
                    mr=m-1;
            }
            return false;
        }
    }
    // return false;
}

int main(){
    // vector<vector<int>> matrix={ {1,3,5,7},{10,11,16,20},{23,30,34,60}};
    // cout<<searchMatrix(matrix,23);
    cout<<(0-1)%(3-1);
}