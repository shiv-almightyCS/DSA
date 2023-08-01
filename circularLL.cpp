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

void insertNode(Node* &tail,int element,int data){
    // empty list
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }else{  //list is not empty
        // cout<<"tail = "<<tail->data<<endl;
        Node* current=tail;
        while(current->data!=element){
            current=current->next;
        }
        Node* temp=new Node(data);
        temp->next=current->next;
        current->next=temp;
    }
}

Node *detectCycle(Node *head) {
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(!fast || !fast->next)
            return NULL;
        fast=head;
        while(fast!=slow){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }

void deleteNode(Node* &tail,int element){
    Node* previous=tail;
    Node* current=previous->next;
    while(current->data!=element){
        previous=current;
        current=current->next;
    }

    previous->next=current->next;
    if(current==previous){
        tail=NULL;
    }else if(tail==current){
        tail=previous;
    }
    current->next=NULL;
    delete current;
}

void print(Node* tail){
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail=NULL;
    insertNode(tail,5,1);
    insertNode(tail,1,2);
    insertNode(tail,2,3);
    insertNode(tail,3,4);
    insertNode(tail,2,69);
    // print(tail);
    // deleteNode(tail,1);
    // deleteNode(tail,3);
    // print(tail);
    // deleteNode(tail,1);
    print(tail);
    cout<<detectCycle(tail);
}