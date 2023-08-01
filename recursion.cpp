#include <bits/stdc++.h> 
using namespace std;

void bubble(int arr[]){
    
}

int power(int a,int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans=power(a,b/2);
    if(b%2==0)
        return ans*ans;
    else
        return a*ans*ans;
}

bool checkPalindrom(string str,int i=0){
    if(i>str.length()-i-1)
        return true;
    if(str[i]!=str[str.length()-i-1])
        return false;
    return checkPalindrom(str,i+1);
}

string reverseTheString(string str,int s=0){
    if(s<=str.length()-s-1){
        swap(str[s],str[str.length()-s-1]);
        return reverseTheString(str,s+1);
    }
    return str;
       

}

bool binarySearch(int arr[],int start,int end,int  key){
    if(start>end)
        return false;
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
        return true;
    if(arr[mid]<key)
        return binarySearch(arr,start,mid-1,key);
    else
        return binarySearch(arr,mid+1,end,key);

}

void sumOfArray(int arr[],int size,int sum=0){  //sum of the elements of array using recursion
    if(size==0){
        cout<<sum;
        return;
    }
    sum=sum+(*arr);
    return sumOfArray(arr+1,size-1,sum);
}

void sayDigit(int n){ 
    string num[10]={"zero","one","tow","three","four","five","six","seven","eight","nine"};
    if(n==0)
        return;
    int digit=n%10;
    sayDigit(n/10);
    cout<<num[digit]<<" ";
}

int fib(int n){ //fibonaccie series
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1)+fib(n-2);
}

bool PredictTheWinner(vector<int>& nums) {
    long long int p1=0,p2=0;
    for(int i=0;i<nums.size();i++){
        if(i%2==0)
            p1+=nums[i];
        else
            p2+=nums[i];
    }
    if(nums.size()%2==0 && p1<p2)
        return true;
    if(p1>=p2)
        return true;
    return false;
}

int main(){
    vector<int> v={1,10,3,4,5};
    // cout<<v.size()<<endl;
    // cout<<PredictTheWinner(v);
    // int n;
    // cin>>n;
    // sayDigit(n);
    // int arr[5]={1,10,3,4,5};
    // sumOfArray(arr,5);
    // int arr[6]={2,4,6,10,14,18};
    // bool ans=binarySearch(arr,0,6,1);
    // cout<<ans;
    // string name="aabbccbbaa";
    // cout<<reverseTheString(name);
    // cout<<checkPalindrom(name);
    cout<<power(3,10);

}