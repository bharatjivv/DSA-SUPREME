// Queue Class 1
// Queue is a data structure
// FIFO principle
// Line in ATMs
// Major use in traversals, graphs, sliding window

/*
#include <iostream>
#include <queue>
using namespace std;

int main() {
  // creation
  queue<int> q;

  // insertion
  q.push(5);
  q.push(15);
  q.push(25);
  q.push(55);

  // size
  cout << "Size of queue is : " << q.size() << endl;

  // removal
  q.pop();
  cout << "Size of queue is ; " << endl;

  if(q.empty()){
    cout << "Queue is empty " << endl;
  } else{
    cout << "Queue not empty " << endl;
  }


  cout << "Front element is : " << q.front() << endl;


  return 0;
}

*/

/*

Space
for
next
section

*/

// Designing Queue Class from scratch
#include <iostream>
using namespace std;

class Queue {
public:
  int *arr;
  int size;
  int front;
  int rear;

  Queue(int size) {
    this->size = size;
    arr = new int[size];
    front = 0;
    rear = 0;
  }

  void push(int data) {
    if (rear == size) {
      cout << "Q is full " << endl;
    } else {
      arr[rear] = data;
      rear++;
    }
  }

  void pop() {
    if (front == rear) {
      cout << "Q is empty" << endl;
    } else {
      arr[front] = -1;
      front++;
      if (front == rear) {
        front = 0;
        rear = 0;
      }
    }
  }

  int getFront() {
    if (front == rear) {
      cout << "Q is empty " << endl;
      return -1;
    } else {
      return arr[front];
    }
  }

  bool isEmpty() {
    if (front == rear) {
      return true;
    } else {
      return false;
    }
  }

  int getSize() { return rear - front; }
};

int main() {
  Queue q(10);

  q.push(5);
  q.push(15);
  q.push(25);
  q.push(55);

  cout << "Size of queue is : " << q.getSize() << endl;

  q.pop();

  cout << "Size of queue is : " << q.getSize() << endl;

  cout << "Front element is : " << q.getFront() << endl;

  if (q.isEmpty()) {
    cout << "Q is empty " << endl;
  } else {
    cout << "Q is not empty " << endl;
  }

  return 0;
}