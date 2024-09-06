// Linked List class 2
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        cout << "Node with value : " << this->data << " deleted" << endl;
    }

};
void print(Node* &head);
int getLength(Node* head);
void insertAtHead(Node* &head, Node* &tail, int data);
void insertAtTail(Node* &head, Node* &tail, int data);
void insertAtPosition(Node* &head, Node* &tail, int data, int position);
void deleteFromPosition(Node* &head, Node* &tail, int position);
Node* reverse(Node* &prev, Node* &curr){
    // base case 
    if(curr = NULL){
        return prev;
    }
    // 1 case solve then recursion call
    Node* forward = curr-> next;
    curr-> next = prev;

    reverse(curr, forward);
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;

    first->next = second;
    second -> prev = first;

    second ->next = third;
    third->prev = second;


    print(first);
    cout << endl;
    
    insertAtHead(head, tail, 101);
    print(head);
    cout << endl;

    insertAtTail(head, tail, 501);
    print(head);
    cout << endl;

    insertAtPosition(head, tail, 444, 3);
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 3);
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 3);
    print(head);
    cout << endl;

    deleteFromPosition(head, tail, 3);
    print(head);
    cout << endl;

    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);

    print(head);
    cout << endl;







    return 0;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp-> next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head ==NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        // LL is empty
        // step 1 : create a node
        Node* newNode = new Node(data);

        // step2
        newNode -> next = head;
        
        // step3
        head ->prev = newNode;

        // step4
        head = newNode;
    }
}


void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        // LL is empty
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail-> next = newNode;
        newNode-> prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        if(position == 1){
            insertAtHead(head, tail, data);
            return ;
        }
        int len = getLength(head);
        if(position >= len){
            insertAtTail(head, tail, data);
            return ;
        }

        // insert in middle
        int i = 1;
        Node* prevNode = head;
        while( i < position -1){
            prevNode = prevNode ->next;
            i++;
        }
        Node* curr = prevNode->next;

        Node* newNode = new Node(data);

        prevNode -> next = newNode;
        newNode -> prev = prevNode;
        curr -> prev = newNode;
        newNode -> next = curr;
    }
}

void deleteFromPosition(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout << "Linked lis empty";
        return ;
    }
    if(head ->next == NULL){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return ;
    }
    int len = getLength(head);
    if(position > len){
        cout << "Please enter a valid position " << endl;
    }

    if(position == 1){
        // want to delete from the first node
        Node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
        return ;
    }
    if(position == len){
        // delete last node
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;       
        return ; 
    }

    // delete from middle position
    // find left, curr, right
    // left ke next = right
    // right ka prev = left;
    // curr ka prev = null
    // curr ka next = null
    // delete curr

    int i = 1;
    Node* left = head;
    while(i< position -1){
        left =left -> next;
        i++;
    }
    Node* curr=  left ->next;
    Node* right = curr -> next;

    left-> next = right;
    right-> prev = left;
    curr-> next = NULL;
    curr-> prev= NULL;
    delete curr;
    
}
