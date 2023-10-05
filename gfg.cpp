#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1) return true;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}

int powerIter(int x,int n){
    int temp=1;
    while(n>0){
        if(n%2!=0)
            temp=temp*x;
        x=x*x;
        n=n/2;
    }
    return temp;
}

int power(int x,int n){
    if(n==0)
        return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
        return temp;
    else    
        return temp*x;
}

void primeFactors(int n){
    if(n<=1) return;
    if(n%2==0){
        while(n%2==0){
            cout<<2<<" ";
            n/=2;
        }
    }
    if(n%3==0){
        while(n%3==0){
            cout<<3<<" ";
            n/=3;
        }
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0) {
            while(n%i==0){
                cout<<i<<" ";
                n/=i;
            }
        }
        if(n%(i+2)==0) {
            while(n%(i+2)==0){
                cout<<i+2<<" ";
                n/=(i+2);
            }
        }
    }
}

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int fun(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res+=n/i;
        cout<<res<<endl;
    }
    return res;
}

int stairsCount(int n){
    int sum0=1;
        int sum1=1;
        int count;
        for(int i=2;i<n+1;i++){
            count=sum0+sum1;
            sum0=sum1;
            sum1=count;
        }
        return count;
}

bool kBit(int n,int k){
    n=n>>(k-1);
    return n&1;
}

int oddOccur(vector<int> nums){
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans=ans^nums[i];
    }
    return ans;
}
void towOddOccur(vector<int> nums){
// pair<int,int> towOddOccur(vector<int> nums){
    // pair<int,int> p=make_pair(0,0);
    int res=0;
    for(int i=0;i<nums.size();i++){
        res=res^nums[i];
    }
    cout<<res<<endl;
    int lastSetBit=res&(~(res-1));
    cout<<lastSetBit<<endl;
    int res1=0,res2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]&lastSetBit!=0)
            // p.first=p.first^nums[i];
            res1=res1^nums[i];
        else
            // p.second=p.second^nums[i];
            res2=res2^nums[i];
    }
    cout<<res1<<" "<<res2<<endl;
    // return p;
}

void initial(vector<int> &table){
    for(int i=0;i<256;i++){
        table[i]=table[i>>1]+(i&1);
    }
}
int cntSetBits(int n){

    //Method - 1

    // int cnt=0;
    // while(n>0){
    //     n=n&(n-1);
    //     cnt++;
    // }
    // return cnt;

    //Method - 2

    vector<int> table(256,0);
    initial(table);
    int res=table[n&0xff];
    n>>=8;
    res=res+table[n&0xff];
    n>>=8;
    res=res+table[n&0xff];
    n>>=8;
    res=res+table[n&0xff];
    return res;
}

int fibb(int n){
    if(n==0 || n==1)
        return n;
    return fibb(n-1)+fibb(n-2);
}

int fact(int n,int k){
    if(n==0 || n==1)
        return k;
    return fact(n-1,n*k);
}

void powerSet(string str){
    int n=str.size();
    int powerSize=pow(2,n);
    for(int i=0;i<powerSize;i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j))
                cout<<str[j];
        }
        cout<<endl;
    }
}
bool palindrom(string str,int s,int e){
    if(s>=e)
        return true;
    return (str[s]==str[e]) && palindrom(str,s+1,e-1);
}
int sumOfDigit(int n,int sum){
    if(n==0)
        return sum;
    sum=sum+n%10;
    return sumOfDigit(n/10,sum);
}
int main(){
    // cout<<gcd(2,4)<<endl;
    // cout<<fun(n);'
    // cout<<lcm(6,8)<<endl;
    // cout<<isPrime(7);
    // cout<<stairsCount(6);
    // primeFactors(343);
    // vector<int> nums={4,3,4,4,4,5,5,4};
    // towOddOccur(nums);
    // pair<int,int> p=towOddOccur(nums);
    // cout<<p.first<<" "<<p.second;
    // powerIter(2,10);
    // cout<<kBit(13,3);
    // cout<<cntSetBits(259);
    // powerSet("abc");
    cout<<sumOfDigit(9987,0);
}