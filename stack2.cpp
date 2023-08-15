#include <bits/stdc++.h> 
using namespace std;
int findMinimumCost(string str) {
    if(str.length()%2==1)
        return -1;
        
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        
        if(ch == '{') 
            s.push(ch);
		else
        {
            //ch is closed brace
            if(!s.empty() && s.top() == '{') {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    int a=0,b=0;
    while(!s.empty()){
        if(s.top()=='{')
            b++;
        else{
            a++;
        }
        s.pop();
    }

    return ((a+1)/2)+((b+1)/2);
  
}
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

void reverse(stack<int>& st){
    if(st.empty())
        return;
    int x=st.top();
    st.pop();
    reverse(st);
    solve(st,x);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }
    reverse(st);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    // string str="{}}{}}";
    // cout<<findMinimumCost(str);
}
