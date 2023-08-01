#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    // p2=p2+1;
    //change ?-NO

    // *p2=*p2+1;
    //change ?-YES

    // **p2=**p2+1;
    //change ?-YES
}

int  getSum(int *arr,int n){
    cout<<"Size = "<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

int main(){
    // int num=5;
    // int *ptr=&num;
    // cout<<ptr<<endl;
    // ptr+=1;
    // cout<<ptr<<endl;
    /*
    // int *q=ptr;
    // cout<<ptr<<" - "<<q<<endl;
    // cout<<*ptr<<" - "<<*q<<endl;
    int arr[10]={11,12,13,14,15,16,17,18,19};
    cout<<"Address of first location of arr"<<arr<< " - "<<&arr[0]<<endl;
    cout<<"arr[5] = "<<5[arr]<<endl;//arr[5]==5[arr]
    cout<<*arr<<endl;
    char ch[5]="abcd";
    char *c=&ch[0];
    cout<<&ch<<endl;
    cout<<c<<endl;
    char temp='x';
    cout<<&temp<<endl;
    char *p=&temp;
    cout<<p;
    */
   int arr[5]={1,2,3,4,5};
//    cout<<"Sum = "<<getSum(arr,5)<<endl;

   //Double Pointer

   int i=5;
   int *p=&i;
   int **q=&p;
//    cout<<&i<<endl;
//    cout<<p<<endl;
//     cout<<*q<<endl;
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // cout<<endl<<"Before"<<endl;
    // cout<<endl<<i<<endl;
    // cout<<p<<endl;
    // cout<<p2<<endl;
    // update(p2);
    // cout<<endl<<"After"<<endl;
    // cout<<endl<<i<<endl;
    // cout<<p<<endl;
    // cout<<p2<<endl;

    // cout<<endl<<&p<<endl;
    // cout<<p2<<endl;

    // cout<<endl<<&p2<<endl;

}