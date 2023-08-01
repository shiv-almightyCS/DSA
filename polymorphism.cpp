#include<bits/stdc++.h>
using namespace std;


// function overloading
class A{
    public:
        void hello(){
            cout<<"Hello Shiv"<<endl;
        }
        int hello(string name,int n){
            cout<<"Hello "<<name<<endl;
            return n;
        }
        void hello(string name){
            cout<<"Hello "<<name<<endl;
        }
};

// operator overloading

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1=this->a;//7
        int value2=obj.a;//4
        cout<<"Output = "<<value2-value1<<endl;
    }
};

int main(){
    // A obj;
    // obj.hello();
    // obj.hello("Shiv");
    // cout<<obj.hello("Shiv",5);

    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj2+obj1;
}


