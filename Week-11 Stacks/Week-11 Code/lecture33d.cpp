// Middle element of the stack
#include <iostream>
#include <stack>
using namespace std;

void printMiddle(stack<int> &s, int &totalSize){
  if(s.size() == 0){
    cout << "There's no element in stack " << endl;
    return ;
  }
  
  // basecase
  if(s.size() == totalSize/2 + 1){
    cout << "Middle element is : " << s.top() << endl;
    return ;
  }

  int temp = s.top();
  s.pop();

  // recursive call
  printMiddle(s, totalSize);

  // backtrack
  s.push(temp);
}

int main(){
  stack<int> s;
  int arr1[7] = {10, 20, 30, 40, 50, 60, 70};

  for(int i=0; i<7; i++){
    s.push(arr1[i]);
  }

  int totalsize = s.size();
  printMiddle(s, totalsize);


  
}