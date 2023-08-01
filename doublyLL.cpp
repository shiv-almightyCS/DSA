#include<bits/stdc++.h>
using namespace std;
//Link list
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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

void insertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int d,int pos){
    Node* temp=head;
    if(pos==1){
        insertAtHead(head,tail,d);
    }else{
        int cnt=1;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
            insertAtTail(head,tail,d);
        }else{
            Node* nnode=new Node(d);
            nnode->next=temp->next;
            (temp->next)->prev=nnode;
            temp->next=nnode;
            nnode->prev=temp;
        }

    }
}

void deletion(Node* &head,Node* &tail,int pos){
    if(pos==1){
        // cout<<"delete head"<<endl;
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node* current=head;
        Node* previous=NULL;
        int cnt=1;
        while(cnt<pos){
            previous=current;
            current=current->next;
            cnt++;
        }
        if(current->next==NULL){
            // cout<<"delete tail"<<endl;
            current->prev=NULL;
            previous->next=NULL;
            tail=previous;
            delete current;
        }else{
            // cout<<"delete pos"<<endl;
            previous->next=current->next;
            current->next->prev=previous;
            current->prev=NULL;
            current->next=NULL;
            delete current;
        }
    }
}

void printNext(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

void printPrev(Node* &tail){
    Node* temp=tail;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main(){
    // Node* node1=new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    cout<<endl<<"Print usint next pointer"<<endl;
    insertAtPosition(head,tail,50,5);
    printNext(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    deletion(head,tail,5);
    cout<<"After deletion"<<endl;
    printNext(head);
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;
    // cout<<endl<<"Print usint previous pointer"<<endl;
    // printPrev(tail);
}