// Next Smaller Element
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> previousSmallerElement(vector<int>& input){
  stack<int> s;
  s.push(-1);

  vector<int> ans(input.size());

  //left to right -> prev smaller
  for(int i=0; i<input.size(); i++){
    int curr = input[i];

    //chota element mil chuka hai -> ans store
    ans[i] = s.top();

    s.push(curr);
  }

  return ans;
}

vector<int> nextSmaller(vector<int> &input) {
  stack<int> s;
  s.push(-1);

  vector<int> ans(input.size());
  for (int i = input.size() - 1; i >= 0; i--) {
    int curr = input[i];

    // apka answer stack me
    while (s.top() >= curr) {
      s.pop();
    }

    // chota element mil chuka hai -> ans store
    ans[i] = s.top();

    // push kardo curr element
    s.push(curr);
  }

  return ans;
}

int main() {
  vector<int> input;
  input.push_back(2);
  input.push_back(1);
  input.push_back(4);
  input.push_back(3);


  vector<int> ans1 = nextSmaller(input);

  cout << "Printing ans1 " << endl;

  for(int i=0; i<input.size(); i++){
    cout << ans1[i] << " ";
  }cout << endl;

  vector<int> ans2 = previousSmallerElement(input);
  cout << "Printing ans2 " << endl;
  for(int i=0; i<input.size(); i++){
    cout << ans2[i] << " ";
  }


  return 0;
}