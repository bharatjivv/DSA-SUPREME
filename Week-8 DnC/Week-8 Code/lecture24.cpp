// Rat in a maze problem - DNC level 3
#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y, int row, int col, int arr[][4], vector<vector<bool> > &visited){
  if(((x>=0 && x < row) && (y>=0 && y<col)) && (arr[x][y] == 1) && (visited[x][y] == false)){
    return true;
  }
  else{
    return false;
  }
}


void solveMaze(int arr[][4], int row, int col, int i, int j, vector<vector<bool> > &visited, vector<string>& path, string output){
  // base case
  if(i == row-1 && j == col -1){
    // answer found
    path.push_back(output);
    return ;
  }

  // Down -> i+1, j
    if(isSafe(i+1, j, row, col, arr, visited)){
      visited[i+1][j] = true;
      solveMaze(arr, row, col, i+1, j, visited, path, output + 'D');
      // backtrack
      visited[i+1][j] = false;
    }

  // Left -> i, j-1
    if(isSafe(i, j-1, row, col, arr, visited)){
      visited[i][j-1] = true;
      solveMaze(arr, row, col, i, j-1, visited, path, output + 'L');
      // backtrack
      visited[i][j-1] = false;
    }

  // Right -> i,j+1
    if(isSafe(i, j+1, row, col, arr, visited)){
      visited[i][j+1] = true;
      solveMaze(arr, row, col, i, j+1, visited, path, output + 'R');
      // backtrack
      visited[i][j+1] = false;
    }

  // Up -> i-1, j
    if(isSafe(i-1, j, row, col, arr, visited)){
      visited[i-1][j] = true;
      solveMaze(arr, row, col, i-1, j, visited, path, output + 'U');
      // backtrack
      visited[i-1][j] = false;
    }







}

int main() {
  int maze[4][4] = {{1,0,0,0},
                    {1,1,0,1},
                    {1,1,0,0},
                    {0,1,1,1}};

    if(maze[0][0] == 0){
      cout << "No Path Exists";
      return 0;
    }


  int row = 4;
  int col = 4;

  vector<vector<bool> > visited(row, vector<bool>(col, false));
  visited[0][0] = true;

  vector <string> path;
  string output ="";

  solveMaze(maze, row, col, 0, 0, visited, path, output);

  cout << "Printing the results : " << endl;

  for(auto i:path){
    cout << i << " ";
  }cout << endl;
  
  if(path.size() == 0)
    cout << "Not any path";
  
  return 0;
}