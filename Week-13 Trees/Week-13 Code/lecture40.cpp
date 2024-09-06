#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

bool kthancestor(Node *root, int k, Node *p) {
  if (root == NULL)
    return false;

  if (root->data == p->data) {
    return true;
  }

  bool leftAns = kthancestor(root->left, k, p);
  bool rightAns = kthancestor(root->right, k, p);

  if (leftAns || rightAns)
    k--;

  if (k == 0)
    cout << "Answer is : " << root->data << endl;

  return leftAns || rightAns;
}

int main() { return 0; }