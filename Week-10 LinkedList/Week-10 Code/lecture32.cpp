// Linked List class 4
#include <iostream>
using namespace std;


/*
// check palindrome in a linked list
class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse (Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr-> next;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}


bool checkPalindrome(Node* &head){
    if(head == NULL){
        cout << "LL is empty " << endl;
        return true;
    }
    if(head -> next == NULL){
        return true;
    }

    // Step 1 : Find the middle node
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL){
        fast = fast-> next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    // slow pointer is pointing to the middle node

    // Step B : revers the LL after middle node
    Node* reverseLLKaHead = reverse(slow->next);
    
    slow -> next = reverseLLKaHead;

    // Step C : Start Comparing 
    Node* temp1 = head;
    Node* temp2 = reverseLLKaHead;
    while(temp2 != NULL){
        if(temp1 -> data != temp2 -> data){
            // not a palindrome
            return false;
        }
        else{
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }
    return true;
    
    
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    bool isPalindrome = checkPalindrome(head);

    if(isPalindrome){
        cout << "LL is a palindrome " << endl;
    }
    else{
        cout << "Not a palindrome " << endl;
    }
    
    
    
    return 0;
}
*/


// remove duplicates from a sorted linked list
class Node{
    public: 
        int data;
        Node* next;
    
    Node(int data){
        this->data = data;
        this->next = next;
    }
};




void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}


int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth; 

    cout << "Printed Linked List is : ";
    print(head);

    
    
}