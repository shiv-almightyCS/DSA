#include<bits/stdc++.h>
using namespace  std;
class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

Node* reverse1(Node* head) {
    Node* previous=NULL;
    Node* current=head;
    Node* forward;
    while(current!=NULL){
        forward=current->next;
        current->next=previous;
        previous=current;
        current=forward;
    }
    return previous;
}

Node* reverse2(Node* head,int left,int right){
    if(head==NULL)
        return NULL;
    Node* curr=head;
    Node*  prev=NULL;
    while(left>1){
        prev=curr;
        curr=curr->next;
        left--;
        right--;
    }
    Node* forward=NULL;
    Node* start=prev;
    Node* tail=curr;
    while(right>0){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        right--;
    }
    if(start!=NULL)
        start->next=prev;
    else{
        head=prev;
    }
    tail->next=curr;
    return head;
}







int main(){
    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    print(head); 
    Node* newHead=reverse2(head,1,4);
    print(newHead);
}