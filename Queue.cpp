#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int k;
    int qfront;
    int rear;
    int* arr;
public:
    CircularQueue(int k){
        this->k=k;
        int qfront=-1;
        int rear=-1;
        arr = new int[k];
    }
    bool enQueue(int value) {
        if((qfront == 0 && rear==k-1) || rear==(qfront-1)%(k-1)){
            cout<<rear<<endl;
            cout<<(qfront-1)%(k-1)<<endl;
            return false;
        }else if(qfront==-1){
            qfront=rear=0;
            arr[rear]=value;
            return true;
        }else if(rear==k-1 && qfront!=0){
            rear=0;
            arr[rear]=value;
            return true;
        }
        else{
            rear++;
            arr[rear]=value;
            return true;
        }
        
    }
    
    bool deQueue() {
        if(qfront == -1){
            return false;
        }
        arr[qfront]=-1;
        if(qfront==rear){
            qfront=rear=-1;
        }else if(qfront==k-1){
            qfront = 0;
        }
        else{
            qfront++;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return arr[qfront];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        if(qfront == -1 && rear==-1){
            return true;
        }
        return false;
        
    }
    
    bool isFull() {
        if((qfront == 0 && rear==k-1) || rear==(qfront-1)%(k-1))
            return true;  
        return false; 
    }
};

class Queue{
    int size;
    int qfront;
    int rear;
    int* arr;
public:
    Queue(int size){
        this->size=size;
        qfront=0;
        rear=0;
        arr=new int[size];
    }
    void enqueue(int val){
        if(rear==size){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            arr[rear++]=val;
        }
    }
    int denqueue(){
        if(qfront == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }else{
            int ans=arr[qfront];
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }
    int front(){
        if(qfront==rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[qfront];
    }
    bool isEmpty(){
        if(qfront==rear) return true;
        else    return false;
    }
    void print(){
        for(int i=qfront;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue* q1=new Queue(5);
    CircularQueue* cq=new CircularQueue(3);
    cout<<cq->enQueue(1)<<endl;
    cout<<cq->enQueue(2)<<endl;
    // cout<<cq->deQueue()<<endl;
    // cout<<cq->enQueue(3)<<endl;
    // cout<<cq->deQueue()<<endl;
    // cout<<cq->enQueue(3)<<endl;
    // cout<<cq->deQueue()<<endl;
    // cout<<cq->enQueue(3)<<endl;
    // cout<<cq->deQueue()<<endl;
    // cout<<cq->Front()<<endl;
}