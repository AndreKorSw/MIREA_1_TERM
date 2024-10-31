
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int size = 100; // ширина графика
  int height = 21; // высота

  vector<string> sinGraph(height, string(size, ' ')); // пустое поле
  sinGraph[height/2] = string(size, '-'); // ось

  for(int i = 0; i < size; i++) { // точки графика
    sinGraph[(round(10 * sin(i / 4.5) + 10))][i] = '*'; 
  }
  
  for(auto s: sinGraph) { // напечатать 
    cout << s << '\n';
  }
}