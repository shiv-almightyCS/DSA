#include<bits/stdc++.h>
using namespace std;
//Link list
class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        //To free memory
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for "<<val<<endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    Node* temp=head;
    int count=0;
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    while (count<position-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nnode=new Node(d);
    nnode->next=temp->next;
    temp->next=nnode;
}

void deletion(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }else{
        Node* current=head;
        Node* prev=NULL;
        int  cnt=1;
        while(cnt<pos){
            prev=current;
            current=current->next;
            cnt++;
        }
        prev->next=current->next;
        if(current->next==NULL)
            tail=prev;
        current->next=NULL;
        delete current;
    }

}
Node* merge(Node* left,Node* right){
    if(left==NULL)
        return right;
    if(right==NULL)
        return left;
    Node* dumy=new Node(-1);
    Node* temp=dumy;
    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
    }
    while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
    }
    dumy=dumy->next;
    return dumy;
}
Node* findMid(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* sortList(Node* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* mid=findMid(head);

    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;

    left=sortList(left);
    right=sortList(right);
    
    Node* ans=merge(left,right);
    return ans;
}

Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* forward;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

Node* removeDuplicate(Node* head){  //remove duplicate from unsorted linked list
    map<int,bool> m;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        
        if (!(m.find(temp->data)!=m.end())){
            m.insert({temp->data,true});
            prev=temp;
        }
        else{
            prev->next=temp->next;
        }
        temp=temp->next; 
    }    
    
    return head;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl; 
}
int main(){
    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,10);
    insertAtPosition(head,tail,2,40);
    insertAtPosition(head,tail,1,69);
    insertAtPosition(head,tail,5,40);
    insertAtPosition(head,tail,5,40);
    insertAtPosition(head,tail,1,50);
    insertAtPosition(head,tail,3,50);
    print(head); 
    Node* ans=removeDuplicate(head);
    print(ans);
    // Node* ans=sortList(head);
    // deletion(head,tail,4);
    // deletion(head,tail,3);
    // print(ans);

    // Node* reverse=reverseList(ans);
    // print(reverse);
}