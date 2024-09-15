#include <iostream>
using namespace std;

class ClrQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    
    ClrQueue(int size){
        this -> size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    
    void push(int data){
        // Queue full case
        // Single element push case
        // Circular nature
        // normal flow
        if((front == 0 && rear == size-1)){
            cout << "Queue is full, cannot insert " << endl;
        }
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        else if((rear == size -1) && (front != 0)) {
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }
    
    void pop() {
        // single element pop case
        // circular nature
        // empty check
        // normal flow
        if(front == -1){
            cout << "Queue is empty, cannot pop" << endl;
        }
        if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }
        else if(front = size -1){
            front = 0;
        }
        else{
            front++;
        }
    }
    
};


int main(){
    
    return 0;
}