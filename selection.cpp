#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>& v){
    for(int i=0;i<v.size();i++){
        int min=i;
        for(int j=i+1;j<v.size();j++){
            if(v[min]>v[j])
                swap(min,j);
        }
        if(i!=min)
            swap(v[i],v[min]);
    }
}

int main(){
    vector<int> v={5,3,2,1,4,66,12,134,4567,23,1,1,4};
    selection(v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

}