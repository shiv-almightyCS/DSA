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
int main(){
    int n=1000;
    // cout<<gcd(2,4)<<endl;
    // cout<<fun(n);'
    // cout<<lcm(6,8)<<endl;
    // cout<<isPrime(7);
    // cout<<stairsCount(6);
    // primeFactors(343);

    
}