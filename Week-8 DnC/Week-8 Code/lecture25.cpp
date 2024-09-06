// N QUEENS Problem - DNC level 4
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
  // check karna chahte hai ki current cell pr [row,col] queen rakh skta hoon 
  int i = row;
  int j = col;

  // check row 
  while(j>=0){
    if(board[i][j] == 'Q'){
      return false;
    }
    j--;
  }
  
  // check upper left diagonal 
  i = row;
  j = col;
  while(i>=0 && j>=0){
    if(board[i][j] == 'Q'){
      return false;
    }
    i--;
    j--;
  }
  
  // check bottom left diagonal
  i = row;
  j = col;
  while(i<n && j>=0){
    if(board[i][j] == 'Q'){
      return false;
    }

    i++;
    j--;
  }
  
  // kahin par bhi queen nahi mili
  // iska matlab position safe hai 
  return true;
}


void printSolution(vector<vector<char>> &board, int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n;j++){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}


void solve(vector<vector<char>> board, int col, int n){
  // base case
  if(col>=n){
    printSolution(board, n);
    cout << endl;
    return ;
  }
  
  // 1 case solve karna hai, baaki recursion sambhal lega
  for(int row = 0; row <n; row++){
    if(isSafe(row, col, board, n)){
      // rakhdo 
      board[row][col] = 'Q';
      // recursion solution laega
      solve(board, col+1, n);
      // backtracking
      board[row][col] = '-';
    }
  }
  
  
}


int main() {
  int n = 4;
  vector<vector<char>> board(n, vector<char>(n, '-'));
  int col = 0;
  solve(board, col, n);
  
  
  return 0;
}