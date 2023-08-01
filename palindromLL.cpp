#include<bits/stdc++.h>
using namespace std;


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

Node* frontPointer;

bool solve(Node* current){
    if (current != NULL) {
        cout<<!solve(current->next)<<endl;
            if (!solve(current->next)) return false;
            if (current->data != frontPointer->data) return false;
            frontPointer = frontPointer->next;
    }
    return true;
}

bool isPalindrome(Node* &head) {
        frontPointer = head;
        return solve(head);
}

int main(){
    Node* node1=new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,20);
    insertAtHead(head,20);
    insertAtHead(head,10);
    // print(head);
    // cout<<isPalindrome(head);
    bool x=isPalindrome(head);
}