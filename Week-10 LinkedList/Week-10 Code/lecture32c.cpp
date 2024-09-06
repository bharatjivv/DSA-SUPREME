// Sort 0s 1s and 2s 
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}


/*

void sortZeros(Node* &head){
  int zero = 0;
  int one = 0;
  int two = 0;

  Node* temp = head;
  while(temp != NULL){
    if(temp ->data == 0)
      zero++;
    if(temp->data == 1)
      one++;
    if(temp->data == 2)
      two++;
    
    temp = temp->next;

  }

  temp = head;
  while(temp != NULL){
    while(zero--){
      temp->data = 0;
      temp = temp-> next;
    }
    while(one--){
      temp ->data = 1;
      temp = temp-> next;
    }
    while(two--){
      temp -> data = 2;
      temp = temp->next;
    }
  }
}
*/

Node* sort2(Node* &head){
  if(head == NULL){
    cout << "LL is empty " << endl;
    return NULL;
  }

  if(head -> next == NULL){
    cout << "ONly single node in linked list " << endl;
    return head;
  }


  Node* zeroHead = new Node(-1);
  Node* zeroTail = zeroHead;

  Node* oneHead = new Node(-1);
  Node* oneTail = oneHead;

  Node* twoHead = new Node(-1);
  Node* twoTail = twoHead;

  // traverse the original LL
  Node* curr = head;
  while(curr!= NULL){
    if(curr-> data == 0){
      // take out the zero wali node
      Node* temp = curr;
      curr = curr-> next;
      temp->next = NULL;

      // append the zero node in zerhead LL
      zeroTail -> next = temp;
      zeroTail = temp;
    }
    else if(curr-> data == 1){
      Node* temp = curr;
      curr = curr-> next;
      temp-> next = NULL;

      oneTail -> next = temp;
      oneTail = temp;
    }
    else if(curr -> data == 2){
      Node* temp = curr;
      curr = curr -> next;
      temp -> next = NULL;
      twoTail-> next = temp;
      twoTail = temp;
    }
  }

  // ab yha pr zero, one, two, teeno LL ready h
  // modify one wali list
  Node* temp = oneHead;
  oneHead = oneHead -> next;
  temp -> next = NULL;
  delete temp;

  // modify two wali list
  temp = twoHead;
  twoHead = twoHead-> next;
  temp->next = NULL;
  delete temp;

  // join list 
  if(oneHead != NULL){
    // one wali list is non empty
    zeroTail -> next = oneHead;
    if(twoHead != NULL)
      oneTail -> next = twoHead;
  }
  else{
    if(twoHead != NULL)
      zeroTail-> next = twoHead;
  }

  // remove zeroHead dummy Node
  temp = zeroHead;
  zeroHead = zeroHead -> next;
  temp -> next = NULL;
  delete temp;

  // return head of the modified linked list 
  return zeroHead;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;
    cout << "Input LL : ";
    print(head);
    
    /*
    sortZeros(head);
    cout << "Output LL : ";
    print(head);
    */

    head = sort2(head);
    print(head);

    
    return 0;
}




