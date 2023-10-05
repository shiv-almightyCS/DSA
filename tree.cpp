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

void inorder(node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* builtFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root : ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}
vector<int> topView(node* root){
    vector<int> ans;
    if(root==NULL)
        return ans;
    map<int,int> topNode;
    queue<pair<node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();
        node* frontNode=temp.first;
        int hd=temp.second;
        if(topNode.find(hd)==topNode.end()){
            topNode[hd]=frontNode->data;
        }
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:topNode){
        ans.push_back(i.second);
    }
    return ans;

}
vector<int> bottomView(node* root){
    vector<int> ans;
    if(root==NULL)
        return ans;
    map<int,int> topNode;
    queue<pair<node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();
        node* frontNode=temp.first;
        int hd=temp.second;
        topNode[hd]=frontNode->data;
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i:topNode){
        ans.push_back(i.second);
    }
    return ans;

}
void solve(node* root,vector<int> &ans,int lvl){
    if(root==NULL)
        return;
    if(lvl==ans.size())
        ans.push_back(root->data);
    cout<<"Right level="<<lvl<<endl;
    solve(root->left,ans,lvl+1);
    cout<<"Left level="<<lvl<<endl;           
    solve(root->right,ans,lvl+1);
}
vector<int> leftView(node* root){
    vector<int> ans;
    if(root==NULL)
        return ans;
    solve(root,ans,0);
    return ans;

}

void traverseLeft(node* root,vector<int>& ans){
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return;
    ans.push_back(root->data);
    if(root->left)
        traverseLeft(root->left,ans);
    else
        traverseLeft(root->right,ans);
}
void traverseRight(node* root,vector<int>& ans){
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return;
    if(root->right)
        traverseRight(root->right,ans);
    else
        traverseRight(root->left,ans);
    ans.push_back(root->data);
}
void traverseLeaf(node* root,vector<int>& ans){
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeft(root->left,ans);
    traverseLeft(root->right,ans);
}

vector<int> boundryTraversal(node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    ans.push_back(root->data);
    traverseLeft(root->left,ans);

    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);

    traverseRight(root->right,ans);

    return ans;
}

// void traverseDiag(node* root,vector<int>& ans){
//     vector<int> ans;
//     if(root==NULL)
//         return ans;
//     map<int,int> topNode;
//     queue<pair<node*,int>> q;
//     q.push(make_pair(root,0));
//     while(!q.empty()){
//         pair<node*,int> temp=q.front();
//         q.pop();
//         node* frontNode=temp.first;
//         int hd=temp.second;
//         topNode[hd]=frontNode->data;
//         if(frontNode->left){
//             q.push(make_pair(frontNode->left,hd-1));
//         }
//         if(frontNode->right){
//             q.push(make_pair(frontNode->right,hd+1));
//         }
//     }
//     for(auto i:topNode){
//         ans.push_back(i.second);
//     }
//     return ans;
// }



vector<int> diagonal(node* root){
    vector<int> ans;
    if(root==NULL)
        return ans;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        while(temp){
            if(temp->left) q.push(temp->left);
            ans.push_back(temp->data);
            temp=temp->right;
        }
    }
    return ans;
    //8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
}

int main(){
    node* root=nullptr;
    builtFromLevelOrder(root);
    // levelOrderTraversal(root);
    vector<int> ans=diagonal(root);
    for(auto i: ans){
        cout<<i<<" ";
    }
}