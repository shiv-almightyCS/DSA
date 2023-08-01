#include<bits/stdc++.h>
using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int size){
//         this->size=size;
//         arr=new int[size];
//         top=-1;
//     }

//     void push(int val){
//         if(size-top>1)
//             arr[++top]=val;
//         else
//             cout<<"Stack is overflow"<<endl;
//     }

//     int pop(){
//         if(isEmpty()){
//             cout<<"Stack is underflow"<<endl;
//             return 0;
//         }
//         return arr[top--];
//     }
//     int peek(){
//         return arr[top];
//     }

//     bool isEmpty(){
//         if(top==-1)
//             return true;
//         return false;
//     }
//     void print(){
//         for(int i=top;i>=0;i--){
//             cout<<arr[i]<<endl;
//         }
//     }
// };
void solve(stack<int>& st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int top=st.top();
    st.pop();
    solve(st,x);
    st.push(top);
}
void sortedInsert(stack<int>& st,int x){
    if(st.empty() || st.top()<x){
        st.push(x);
        return;
    }
    int top=st.top();
    st.pop();
    sortedInsert(st,x);
    st.push(top);
}
void reverse(stack<int>& st){
    if(st.empty()) return;
    int num=st.top();
    st.pop();
    reverse(st);
    solve(st,num);
}
void sortStack(stack<int>& st){
    if(st.empty()) return;
    int num=st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st,num);
}
int main(){
    // Stack* st=new Stack(5);
    // st->push(5);
    // st->push(4);
    // st->push(3);
    // st->push(2);
    // st->push(1);
    // st->print();
    // cout<<"Peek element is = "<<st->peek()<<endl;
    // cout<<"pop = "<<st->pop()<<endl;
    // cout<<"pop = "<<st->pop()<<endl;
    // cout<<"Peek element is = "<<st->peek()<<endl;
    // st->print();
    int x=1;
    stack<int> st;
    st.push(2);
    st.push(8);
    st.push(4);
    st.push(9);
    solve(st,x);
    reverse(st);
    sortStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}