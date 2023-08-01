#include<bits/stdc++.h>
using namespace std;
vector<int> insertionSort(vector<int> v){
    for(int i=1;i<v.size();i++){
        int temp=v[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(v[j]>temp)
                v[j+1]=v[j];
            else
                break;
        }
        v[j+1]=temp;
    }
    return v;
}
vector<int> bubbleSort(vector<int> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()-1;j++){
            if(v[j]>v[j+1])
                swap(v[j],v[j+1]);
        }
    }
    return v;
}

vector<int> selectionSort(vector<int> v){
    for(int i=0;i<v.size();i++){
        int min=i;
        for(int j=i+1;j<v.size();j++){
            if(v[min]>v[j])
                min=j;
        }
        if(min!=i)
            swap(v[i],v[min]);
    }
    return v;
}
int main(){
    vector<int> v={1,7,2,9,0,91,12,87,90};
    // vector<int> sortedV=selectionSort(v);
    // vector<int> sortedV=bubbleSort(v);
    vector<int> sortedV=insertionSort(v);
    for(int i=0;i<sortedV.size();i++)
        cout<<sortedV[i]<<" ";
}