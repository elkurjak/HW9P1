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
for(int a = 0; a < 5; a++){
    for(int b = 0; b < 5; b++) {
      cout << setw(5)<< grades[a][b] ;
      }
    int average = (grades[a][1] + grades [a][2] + grades [a][3] + grades [a][4]) / 4;
    cout << setw(5) <<average;
    int wAverage = ((grades [a][1] * 0.2) + (grades [a][2] * 0.3) + (grades [a][3] * 0.3) + (grades [a][4] * 0.2)) /4;
  cout << setw(5) <<wAverage;
      cout << endl;
    int bad; //worst score
  if (grades [a][1] < bad){
    bad = grades [a] [1];
  }
  else if (grades [a][2] < bad){
    bad = grades [a][2];
  }
  else if (grades [a][3] < bad){
    bad = grades [a][3];
  }
  else {
    bad = grades [a][4];
  }
  int topAverage = ()
  } 
}

  
