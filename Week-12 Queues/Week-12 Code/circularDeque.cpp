#include <iostream>
using namespace std;

class Deque {
public:
	int *arr;
	int size;
	int front;
	int rear;

	Deque(int size) {
		this->size = size;
		arr = new int[size];
		front = -1;
		rear = -1;
	}

	// push data in the rear
	void pushRear(int data) {
		// 1st case -> queue is empty  ( checked )
		if((front ==-1) && (rear == -1)) {
			front = 0;
			rear = 0;
			arr[rear] = data;
			return ;
		}
		// 2nd case -> normal case
		{
			rear++;
			arr[rear] = data;
			return ;
		}
		// 3rd case -> circular nature  ( checked )
		if(rear == size -1) {
			if(front != 0) {
				rear = 0;
				arr[rear] = data;
				return ;
			}
		}
		// 4th case -> Queue is full ( checked )
		if((front == 0) && (rear == size-1)) {
			cout << "Cannot pushback, Queue is full " << endl;
			return ;
		}

	}


	// push data in the front
	void pushFront(int data) {
		// 1st case -> Queue is empty
		if((front == -1) && (rear == -1)) {
			front = rear = 0;
			arr[front] = data;
			return ;
		}

		// 2nd case -> normal case
		{
			front--;
			arr[front] = data;
			return ;
		}

		// 3rd case -> front is at 0 so circular nature
		if(front == 0) {
			if(rear != size-1) {
				front = size -1;
				arr[front] = data;
				return ;
			}
		}

		// 4th case -> Queue is full
		if((front == 0) && (rear = size -1)) {
			cout << "Queue is full, cannot insert " << endl;
			return ;
		}

	}

	// pop data from front
	void popfromFront() {
		//case 1 -> if queue is already empty
		if(front == -1) {
			cout << "Queue is empty, cannot pop" << endl;
			return ;
		}
		// case 2 -> circular nature
		if(front = size -1) {
			arr[front] = -1;
			front = 0;
			return ;
		}
		// case 3 -> empty case
		if(front == rear) {
			arr[front] = -1;
			front = -1;
			rear = -1;
			return ;
		}
		// case 4 -> normal case
		{
			arr[front] = -1;
			front ++;
		}
	}


	// pop data from rear
	void popRear() {
		//case 1 -> normal case
		{
			arr[rear] = -1;
			rear--;
		}
		// case 2 -> Queue is empty
		if(front = -1 && rear == -1) {
			cout <<"Cannot pop, queue is empty "<< endl;
		}

		//single element
		if(front == rear) {
			arr[rear] = -1;
			front = rear = -1;
		}

		// circular case
		if(rear == 0) {
			arr[rear] = -1;
			rear = size -1;
		}

	}
	// H.W. -> getsize, empty functions
};

int main() {
	cout << "Working exceptionally right " << endl;

	return 0;
}