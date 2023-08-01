#include<bits/stdc++.h>
using namespace std;

void merge1(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    k=s;
    int index1=0;
    int index2=0;
    while(index1<len1 && index2 < len2){
        if(first[index1]<second[index2])
            arr[k++]=first[index1++];
        else
            arr[k++]=second[index2++];
    }

    while(index1<len1){
        arr[k++]=first[index1++];
    }

    while(index2 < len2){
        arr[k++]=second[index2++];
    }



}

void mergeSort(int *arr,int s,int e){
    if(s>=e)
        return;
    
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge1(arr,s,e);
}

int main(){
    int arr[10]={37, 52, 18, 64, 91, 27, 83, 45, 10, 76};
    mergeSort(arr,0,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}