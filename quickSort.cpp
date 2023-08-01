#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot)
            cnt++;
    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i],arr[j]);
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e)
        return;
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    // int arr[10]={37, 52, 18, 64, 91, 27, 83, 45, 10, 76};
    // quickSort(arr,0,9);
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }

    string s="abab";

    string goal="abab";
    string temp=s;
     for(int i=0;i<s.length()-1;i++){
            swap(s[i],s[i+1]);  
            if(s==goal)
                cout<<"true";
            s=temp;
        }
        
        cout<<"false";
}