// Leetcode Min Stack Question
// Coded four functions, push, pop, top, getMin
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class MinStack {
public:
  vector<pair<int, int>> st;

  void push(int val) {
    if (st.empty()) {
      pair<int, int> p = make_pair(val, val);
      st.push_back(p);
    } else {
      pair<int, int> p;
      p.first = val;
      p.second = min(val, st.back().second);
      st.push_back(p);
    }
  }

  void pop() { st.pop_back(); }

  int top() { return st.back().first; }

  int getMid() { return st.back().second; }
};





// Longest Valid Parenthesis
class Solution {
public:
  int longestValidParenthesis(string s) {
    stack<int> st;
    st.push(-1);
    int maxLen = 0;
    for (int i = 0; i < s.length(); i++) {
      char ch = s[i];
      if (ch == '(') {
        st.push(i);
      } else {
        st.pop();
        if (st.empty()) {
          st.push(i);
        } else {
          int len = i - st.top();
          maxLen = max(len, maxLen);
        }
      }
    }

    return maxLen;
  }
};

