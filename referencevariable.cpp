#include<bits/stdc++.h>
using namespace std;
int getSum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
int main(){
    /*int i=5;
    int& j=i;
    cout<<i<<" "<<j<<endl;

    Dynamic Memory
    int n;
    cin>>n;
    variable size array
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Sum is "<<getSum(arr,n);

    Variable size 2D array using dynamic memory allocation
*/
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    //creation done

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }  

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }  

    //input and printing done

    //releasing memory

    for(int i=0;i<n;i++)
        delete []arr[i];

    delete []arr;

    //deletion done(Memory free in heap)
    

}