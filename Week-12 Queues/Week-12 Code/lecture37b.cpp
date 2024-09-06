// Queue class 2
// Reversing K elements

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void print(queue<int> q) {
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}

void reverseK(queue<int> &q, int k) {
  // Step a: queue -> k elements -> stack
  stack<int> s;
  int count = 0;
  int n = q.size();

  if (k == 0 || k > n)
    return;

  while (!q.empty()) {
    int temp = q.front();
    q.pop();
    s.push(temp);
    count++;

    if (count == k)
      break;
  }

  // step B: stack -> q me wapas
  while (!s.empty()) {
    int temp = s.top();
    s.pop();
    q.push(temp);
  }

  // step C: push n-k elements from q front to back
  count = 0;
  while (!q.empty() && n - k != 0) {
    int temp = q.front();
    q.pop();
    q.push(temp);
    count++;

    if (count == n - k) {
      break;
    }
  }
}

int main() {
  queue<int> q;
  q.push(3);
  q.push(6);
  q.push(9);
  q.push(2);
  q.push(8);

  cout << "Printing : ";
  print(q);

  reverseK(q, 3);
  cout << "Printing after reversing k elements : ";

  print(q);

  return 0;
}