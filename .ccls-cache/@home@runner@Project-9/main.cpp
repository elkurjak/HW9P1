#include <iostream>
#include <iomanip>

using namespace std;

int main() {
//declare constants for my number of cols/rows
  const int COLUMNS = 5;
  const int ROWS = 5;
  //input grades
  int grades [ROWS] [COLUMNS] = {{1, 100,100,100,100}, {2,100,0,100,0}, {3,82,94,73,86}, {4,64,74,84,94}, {5,94,84,74,64}};
//for loops
for(int a = 0; a < 5; a++)
  {
    for(int b = 0; b < 5; b++)
    {
      cout << setw(5)<< grades[a][b] ;
    }
    cout << endl;
  } 



  
}

  
