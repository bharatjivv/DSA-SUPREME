// Linked List Class 1
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        // Write a destructor to delete a node
    }
};
void print(Node* &head);
void insertAtHead(Node* &head, Node* &tail, int data);
void insertAtTail(Node* &head, Node* &tail, int data);
void insertAtPosition(int data, int position, Node* &head, Node* &tail);
int findlength(Node* &head);
void deleteNode(int position, Node* &head, Node* &tail);

int main(){
   Node* head = NULL;
   Node* tail = NULL;
/*
    cout << "Inserting at head right now : " << endl;
    print(head);
    cout << endl;
    insertAtHead(head, tail, 20);
    print(head);
    cout << endl;
    insertAtHead(head, tail, 30);
    print(head);
    cout << endl;
    insertAtHead(head, tail, 40);
    print(head);
    cout << endl;
    insertAtHead(head, tail, 50);
    print(head);
    cout << endl;
    
    cout << "Starting to insert at tail now : " << endl;
    insertAtTail(head, tail, 66);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 77);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 88);
    print(head);
    cout << endl;
    insertAtTail(head, tail, 99);
    print(head);
    cout << endl; 
*/

    cout << "Now inserting at position : " << endl;
    insertAtPosition(101, 2, head, tail);
    print(head);
    cout << endl;
    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;




    
    return 0;
}

// Started initializing functions


void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head== NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;

    }
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    // step1:find the position: prev and current
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    // step1: find out previous and current pointer
    if(position == 0){
        insertAtHead(head, tail, data);
    }

    int len = findlength(head);
    if(position == len){
        insertAtTail(head, tail, data);
    }
    
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;        
    }
    Node* curr = prev->next;

    Node* newNode = new Node(data);

    // step 3
    newNode -> next = curr;

    prev -> next = newNode;
}

int findlength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp !=NULL ){
        temp = temp->next;
        len++;
    }
    return len;
}

void deleteNode(int position, Node* &head, Node* &tail){
    if(head == NULL){
        cout << "Cannot delete, LL is empty";
    }
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp -> next = NULL;
        delete temp;
    }

    int len = findlength(head);
    if(position == len){
        int i = 1;
        Node* prev = head;
        while(i< position -1){
            prev = prev -> next;
            i++;
        }
        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;

    }

    int i = 1;
    Node* prev= head;
    while(i<position-1){
        prev = prev->next;
        i++;
    }
    Node* curr=  prev -> next;
    prev-> next = curr-> next;
    curr->next = NULL;
    delete curr;
    
}