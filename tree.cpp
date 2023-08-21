#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            left=nullptr;
            right=nullptr;
        }
};

node* builtTree(node* root){
    cout<<endl;
    cout<<"Enter data : ";
    int data;
    cin>>data;
    cout<<endl;
    root = new node(data);
    if(data==-1)
        return nullptr;
    cout<<"Enter data for inserting in left of "<<data<<" : ";
    root->left=builtTree(root->left);
    cout<<endl;
    cout<<"Enter data for inserting in right of "<<data<<" : ";
    root->right=builtTree(root->right);
    cout<<endl;
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    // node* root=nullptr;
    // root=builtTree(root);
    // levelOrderTraversal(root);

    int arr[5]={1,2,3,4,5};
    cout<<*(arr);
}