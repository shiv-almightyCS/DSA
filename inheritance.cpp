#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"This is function of class A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"This is function of class B"<<endl;
    }
};
class C:public  A,public B{
    public:
    void abc(){
        cout<<"hi"<<endl;
        // A::fun();
    }
};

int main(){
    C obj;
    obj.A::fun();
}