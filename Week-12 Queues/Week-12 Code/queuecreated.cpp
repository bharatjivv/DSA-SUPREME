#include <iostream>
using namespace std;

class Queue {
public:
	int *arr;
	int size;
	int front;
	int rear;

	Queue(int size) {
		this-> size = size;
		arr = new int[size];
		front = 0;
		rear = 0;
	}

	void push(int data) {
		if(rear == size) {
			cout << "Queue is full, cannot push" << endl;
		}
		else {
			arr[rear] = data;
			rear++;
		}
	}

	void pop() {
		if(front == rear) {
			cout << "Cannot pop, queue is empty " << endl;
		}
		else {
			arr[front] = -1;
			front ++;
			if(front == rear) {
				front = 0;
				rear = 0;
			}
		}
	}

	int getsize() {
		return rear - front + 1;
	}

	int getfront() {
		return arr[front];
	}

	bool isempty() {
		if(front == rear)
			return true;
		else
			return false;
	}

};


int main() {
	Queue q(10);
	q.push(2);
	q.push(4);
	q.push(6);
	q.push(8);
	q.push(10);

	cout << q.getfront() << " ";
	q.pop();

	cout << q.getfront() << " ";
	q.pop();
	cout << q.getfront() << " ";
	q.pop();
	cout << q.getfront() << " ";
	q.pop();
	cout << q.getfront() << " ";
	q.pop();
	q.pop();
	return 0;
}