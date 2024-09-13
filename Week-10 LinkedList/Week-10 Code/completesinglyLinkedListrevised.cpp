#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node() {
		this -> data = 0;
		this -> next = NULL;
	}

	Node(int data) {
		this-> data = data;
		this-> next = NULL;
	}

	~Node() {
		cout << "Node with data " << this->data << " is deleted " << endl;
	}
};

void printLinkedList(Node* &head) {
	Node* temp = head;
	while(temp !=NULL) {
		cout << temp -> data << "  ";
		temp = temp -> next;
	}
	cout << endl;
}

int getlength(Node* &head) {
	Node* temp = head;
	int i = 0;
	while( temp != NULL) {
		temp = temp-> next;
		i++;
	}

	return i;
}

void insertatHead(Node* &head, Node* &tail, int data) {
	if(head == NULL) {
		Node* newNode = new Node(data);
		head = newNode;
		tail = newNode;
	}
	else {
		Node* nayiNode = new Node(data);
		nayiNode -> next = head;
		head = nayiNode;
	}
}

void insertatTail(Node* &head, Node* &tail, int data) {
	if(head == NULL) {
		Node* nayiNode = new Node(data);
		head = nayiNode;
		tail = nayiNode;
	}
	else {
		Node* nayiNode = new Node(data);
		tail-> next = nayiNode;
		tail = nayiNode;
	}
}

void insertatPosition(Node* &head, Node* &tail, int position, int data) {
	int len = getlength(head);

	if(head == NULL) {
		Node* nayiNode = new Node(data);
		head = nayiNode;
		tail = nayiNode;

		return ;
	}

	if(position == 0) {
		insertatHead(head, tail, data);
		return ;
	}

	if(position >= len) {
		insertatTail(head, tail, data);
		return ;
	}
	
	{
		Node* prev = head;
		while(position > 1) {
			prev = prev -> next;
			position--;
		}
		Node* curr = prev-> next;

		Node* nayiNode = new Node(data);
		prev -> next = nayiNode;
		nayiNode -> next = curr;
	}

}

void deletefromposition(Node* &head, Node* &tail, int position) {
	int length = getlength(head);
	if(head == NULL) {
		cout << "cannot delete data, LL is empty " << endl;
		return ;
	}

	if(position == 0) {
		Node* temp = head;
		head = head -> next;
		delete temp;
		return ;
	}


	if(position == length) {
		Node* prev = head;
		int i = 1;

		while(i <position -1) {
			prev = prev -> next;
			i ++;
		}
		Node * curr = prev-> next;
		prev -> next = NULL;
		tail = prev;
		delete curr;

		return ;

	}

	{
		Node* prev = head;
		int i = 1;

		while(i < position-1) {
			prev = prev-> next;
			position--;
		}
		Node* curr = prev->next;
		Node* forward = curr-> next;

		prev->next = forward;
		curr-> next = NULL;
		delete curr;
	}

}

int main() {

// Basic LinkedList 
// 	{
// 		Node* head = new Node(10);
// 		Node* second = new Node(20);
// 		Node* third = new Node(30);
// 		head -> next = second;
// 		second -> next = third;
// 		printLinkedList(head);
// 	}

// created a singly LinkedList and two functions insertatHead, insertatTail, insertatPosition, getlength, deletefunction
// 	{
// 		Node* head = NULL;
// 		Node* tail = NULL;

// 		insertatHead(head, tail, 10);
// 		insertatTail(head, tail, 20);
// 		insertatTail(head, tail, 30);
// 		cout << "Length of LL : " << getlength(head) << endl;

// 		// insertatPosition - working
// 		insertatPosition(head, tail, 3, 35);
// 		insertatPosition(head, tail, 5, 45);
// 		printLinkedList(head);


// 		insertatPosition(head, tail, 5, 5);
// 		printLinkedList(head);

// 		cout << "Length of LL : " << getlength(head) << endl;

// 		insertatPosition(head, tail, 10, 555);
// 		printLinkedList(head);
// 		cout << "Length of LL : " << getlength(head) << endl;


// 		deletefromposition(head, tail, 3);
// 		printLinkedList(head);
// 		cout << "Length of LL : " << getlength(head) << endl;


// 		deletefromposition(head, tail, 0);
// 		printLinkedList(head);
// 		cout << "Length of LL : " << getlength(head) << endl;

// 		deletefromposition(head, tail, 5);
// 		printLinkedList(head);
// 		cout << "lenght : " << getlength(head) << endl;
// 		cout << tail-> data << endl;
// 	}




	return 0;
}