#include <iostream>
using namespace std;
//  Two stacks in an array
class Stack {
public:
  int *arr;
  int size;
  int top1;
  int top2;

  Stack(int size) {
    arr = new int[size];
    this->size = size;
    top1 = -1;
    top2 = size;
  }

  // functions
  void push1(int data) {
    if (top1 - top2 == 1) {
      // space not available
      cout << "Overflow in stack 1 " << endl;
    } else {
      top1++;
      arr[top1] = data;
    }
  }

  void pop1() {
    if (top1 == -1) {
      cout << "Stack 1 underflow " << endl;
    } else {
      arr[top1] = 0;
      top1--;
    }
  }

  void push2(int data) {
    if (top2 - top1 == 1) {
      // space not available
      cout << "Overflow in stack 2 " << endl;
    } else {
      top2--;
      arr[top2] = data;
    }
  }

  void pop2() {
    if (top2 == size) {
      cout << "Stack2 underflow " << endl;
    } else {
      arr[top2] = 0;
      top2++;
    }
  }

  void print() {
    cout << endl;
    cout << "Top 1 : " << top1 << endl;
    cout << "Top 2 : " << top2 << endl;
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack s(10);

  int arr1[5] = {10, 20, 30, 40, 50};
  int arr2[4] = {110, 120, 130, 140};
  
  for(int i = 0; i<5; i++){
    s.push1(arr1[i]);
    s.print();
  }
  
  for(int i = 0; i<4; i++){
    s.push2(arr2[i]);
    s.print();
  }

  for(int i=0; i<7; i++){
    s.pop1();
    s.print();
  }
  
  for(int i=0; i<2; i++){
    s.pop2();
    s.print();
  }



  return 0;
}