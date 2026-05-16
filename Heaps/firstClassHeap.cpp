#include <iostream>
using namespace std;

class Heap {
public:
	int arr[101];
	int size;

	Heap() {
		size = 0;
	}

	void insert(int value) {
		// insert value by increasing the index
		size = size+1;
		int index = size;
		arr[index] = value;

		// place that index at right position
		while(index > 1) {
			int parentNode = index/2;

			if(arr[parentNode] < arr[index]) {
				swap(arr[parentNode], arr[index]);
				index = parentNode;
			}
			else {
				break;
			}
		}
	}

	int deleteNode() {

		int ans = arr[1];
		// Replacing the last index value with 1st index and decreasing the size
		arr[1] = arr[size];
		size--;

		// Now Place the element on 1st index at right position
		int nodeIndex = 1;

		while(nodeIndex < size) {
			int leftChild = 2*nodeIndex;
			int rightChild = 2*nodeIndex + 1;
			int largest;

			if(leftChild < size && arr[nodeIndex] < arr[leftChild]) {
				largest = leftChild;
			}

			if(rightChild < size && arr[nodeIndex] < arr[rightChild]) {
				largest = rightChild;
			}


			if(largest == nodeIndex) {
				break ;
			}
			else {
				swap(arr[largest], arr[nodeIndex]);
				nodeIndex = largest;
			}
		}

		return ans;
	}
};

void heapify(int arr[], int size, int index) {
    cout << "Printing index : " << arr[index] << endl;
	int leftChild = 2*index;
	int rightChild = 2*index + 1;
	int largest = index;

	if(leftChild <= size && arr[index] < arr[leftChild]) {
		largest = leftChild;
	}
	if(rightChild <= size && arr[index] < arr[rightChild]) {
		largest = rightChild;
	}

	if(largest != index) {
		swap(arr[index], arr[largest]);
		index = largest;
		heapify(arr, size, index);
	}
}

void buildHeap(int arr[], int n) {
	for(int i=n/2; i>0; i--) {
		heapify(arr, n, i);
	}
}

int main() {


// 	{
// 		Heap h;

// 		h.arr[0] = -1;
// 		h.arr[1] = 100;
// 		h.arr[2] = 50;
// 		h.arr[3] = 60;
// 		h.arr[4] = 40;
// 		h.arr[5] = 45;
// 		h.size = 5;

// 		cout << "Printing the heap : ";
// 		for(int i=0; i<=h.size; i++) {
// 			cout << h.arr[i] << " ";
// 		}
// 		cout << endl;

// 		h.insert(110);

// 		cout << "Printing after insertion : ";
// 		for(int i=0; i<=h.size; i++) {
// 			cout << h.arr[i] << " ";
// 		}
// 		cout << endl;
// 		cout << "Size after insertion : " << h.size << endl;


// 		h.deleteNode();

// 		cout << "After deletion : ";
// 		for(int i=0; i<h.size; i++) {
// 			cout << h.arr[i] << " ";
// 		}
// 		cout << endl;
// 		cout << "Size after deletion : " << h.size << endl;
// 	}


int arr[]  = { -1, 12, 15, 13, 11, 14 };
int n = 5;

buildHeap(arr, n);

cout << "Printing Heap : ";
for(int i=0; i<=n; i++){
    cout << arr[i] << " ";
}
cout << endl;












	return 0;
}