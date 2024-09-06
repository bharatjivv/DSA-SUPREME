#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target) {
  if (s.empty()) {
    s.push(target);
    return;
  }

  int topElement = s.top();
  s.pop();

  insertAtBottom(s, target);

  s.push(topElement);
}

void reversingStack(stack<int> &s) {
  if (s.empty()) {
    return;
  }

  int top = s.top();
  s.pop();
  reversingStack(s);
  insertAtBottom(s, top);
}

void print(stack<int> s) {
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
}

int main() {
  stack<int> s;
  int arr[5]{10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    s.push(arr[i]);
  }

  print(s);
  reversingStack(s);
  print(s);
}