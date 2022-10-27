#include <iostream>
#include <iomanip>

using namespace std;
void printMatrix(int grades[][5], int ROWS, int COLUMNS);

int main() {
//declare constants for my number of cols/rows
  const int COLUMNS = 5;
  const int ROWS = 5;
  
  //input grades
  int grades [ROWS] [COLUMNS] = {{1, 100,100,100,100}, {2,100,0,100, 0}, {3,82,94,73,86},{4,64,74,84,94}, {5,94,84,74,64}};
  
 printMatrix(grades, ROWS, COLUMNS);
  
  return 0;
}

void printMatrix(int grades[][5], int ROWS, int COLUMNS) {
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLUMNS; c++) {
      cout << setw(5) << grades[r][c];
    }
    cout << endl;
  }
  }
