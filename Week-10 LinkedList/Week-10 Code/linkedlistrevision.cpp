#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node() {
		this-> data = 0;
		this-> next = NULL;
	}
	Node(int data) {
		this-> data = data;
		this-> next = NULL;
	}
	~Node() {
		cout << "Node with data " << this-> data << " is deleted " << endl;
	}
};

void insertatHead(Node* &head, Node* &tail, int data) {
	if(head == NULL) {
		Node* nayiNode = new Node(data);
		head = nayiNode;
		tail = nayiNode;
		return;
	}
	Node* nayiNode = new Node(data);
	nayiNode -> next = head;
	head = nayiNode;
}

void insertatTail(Node* &head, Node* &tail, int data) {
	if(head == NULL) {
		Node* nayiNode = new Node(data);
		head = nayiNode;
		tail = nayiNode;
		return;
	}
	Node* nayiNode = new Node(data);
	tail-> next = nayiNode;
	tail = nayiNode;
}

void printLL(Node* &head) {
	Node* temp = head;
	while(temp !=NULL) {
		cout << temp-> data << "  ";
		temp = temp -> next;
	}
	cout << endl;
}

int getlength(Node* &head) {
	Node* temp = head;
	int i =0;
	while(temp !=NULL) {
		i++;
		cout << temp-> data << "  ";
	}
	return i;
}

Node* printMiddleofLL(Node* &head) {
	Node* slow = head;
	Node* fast = head -> next;

	while(fast != NULL) {
		fast = fast-> next;
		if(fast != NULL) {
			fast = fast-> next;
			slow = slow-> next;
		}
	}
	return slow;
}

Node* reverseLinkedList(Node* &head) {
	Node* prev = NULL;
	Node* forward = NULL;
	Node* curr = head;

	while(curr!= NULL) {
		forward = curr-> next;
		curr-> next = prev;
		prev = curr;
		curr = forward;
	}

	return prev;
}

Node* reverseKnodes(Node* &head, int k) {
	Node* prev = NULL;
	Node* curr = head;
	Node* forward = curr -> next;
	int count = 0;

	while(count < k) {
		forward = curr-> next;
		curr -> next = prev;
		prev = curr;
		curr = forward;
		count++;
	}

	if(forward !=NULL) {
		head -> next = reverseKnodes(forward, k);
	}
	return prev;
}


int main() {

	// Print the middle of the stack - Question One.
	{
		cout << "Started Linked List" << endl;
		Node* head = NULL;
		Node* tail = NULL;

		insertatTail(head, tail, 2);
		insertatTail(head, tail, 4);
		insertatTail(head, tail, 6);
		insertatTail(head, tail, 8);
		insertatTail(head, tail, 10);
		insertatTail(head, tail, 12);
		insertatTail(head, tail, 14);

		printLL(head);

		Node* temp = NULL;
		temp = printMiddleofLL(head);
		cout << "Middle node is : " << temp-> data << endl;
	}

	// Reverse linkedlist
	{
		cout << endl << "Second Question started" << endl;
		Node* head = NULL;
		Node* tail = NULL;

		insertatTail(head, tail, 4);
		insertatTail(head, tail, 8);
		insertatTail(head, tail, 12);
		insertatTail(head, tail, 16);
		insertatTail(head, tail, 20);

		printLL(head);
		head = reverseLinkedList(head);
		printLL(head);

	}

	// reverseKnodes
	{
		cout << endl << "Reversing k nodes "<< endl;
		Node* head = NULL;
		Node* tail = NULL;

		insertatTail(head, tail, 5);
		insertatTail(head, tail, 10);
		insertatTail(head, tail, 15);
		insertatTail(head, tail, 20);
		insertatTail(head, tail, 25);
		insertatTail(head, tail, 30);

		printLL(head);
		head = reverseKnodes(head, 2);
		printLL(head);

	}

	return 0;
}