// Linked List class 4
#include <iostream>
using namespace std;

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


void removeDuplicates(Node* &head){
  if(head == NULL){
    return ;
  }
  if(head -> next == NULL){
    return ;
  }

  Node* curr = head;
  while(curr != NULL){

    if((curr->next != NULL) && (curr->data == curr->next->data)){
      Node* temp = curr->next;
      curr -> next = curr->next->next;
      // delete node
      temp->next = NULL;
      delete temp;
    }

    else{
      curr = curr-> next;
    }
  }
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

    print(head);
    removeDuplicates(head);
    cout << "Output of Linked list : ";
    print(head);

    
    
}

// Homework Question
// Remove duplicate from an unsorted Linked List

