#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int target) {
  // basecase
  if (s.empty()) {
    s.push(target);
    return;
  }

  int topElement = s.top();
  s.pop();
  // rec call
  solve(s, target);
  // backtracking
  s.push(topElement);
}

void insertAtBottom(stack<int> &s) {
  if (s.empty()) {
    cout << "Stack is empty, can't insert at bottom " << endl;
    return;
  }

  int target = s.top();
  s.pop();
  solve(s, target);
}

int main() {
  stack<int> s;
  int arr[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    s.push(arr[i]);
  }

  insertAtBottom(s);

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}