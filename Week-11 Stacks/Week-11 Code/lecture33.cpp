#include <iostream>
#include <stack>
using namespace std;

class Stack{
  public:
    int* arr;
    int top;
    int size;

    Stack(int size){
      arr = new int[size];
      this-> size= size;
      top = -1;
    }

  // functions
  void push(int data){
      if(size - top > 1){
        // space available
        // insert
        top++;
        arr[top] = data;
      }
      else{
        // space not available
        cout << "Stack overflow " << endl;
      }
  }

  void pop(){
      if(top == -1){
        // stack is empty
        cout << "STack underflow, cant delete element" << endl;
      }
      else{
        top--;
      }
  }

  int getTop(){
      if(top == -1){
        cout << "STack is empty " << endl;
      }
      else{
        // cout << arr[top] << endl;
        return arr[top];
      }
  }

  int getSize(){
    return top + 1;
  }

  bool isEmpty(){
    if(top == -1){
      return true;
    }
    else{
      return false;
    }
  }

};


int main(){
    /*
  // creation
  stack<int> st;

  // insertion
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);

  // remove
  st.pop();

  // check element on top 
  cout << "Element on top is : " << st.top() << endl;

  // size
  cout << "Size of stack is : " << st.size() << endl;

  // isempty or not

  if(st.empty()){
    cout << "Stack is empty " << endl;
  }
  else{
    cout << "Stack not empty " << endl;
  }

*/

    Stack s(10);
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isEmpty()){
        cout << s.getTop() << " " <<  endl;
        s.pop();
    } cout << endl;

    cout << "Size of stack : " << s.getSize() << endl;



  return 0;
}