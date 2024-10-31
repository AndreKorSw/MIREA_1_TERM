#include <iostream>
using namespace std;

int sign(float x) {
    if (x > 0) {
	  return 1;
    }
    else if (x == 0) {
      return 0;
    }
    return -1;
}
  
int main() {
  double x = 0;
  cout << "x = ";
  if (cin >> x) {
  	cout << sign(x) << endl;
 	main();
  }
  else {
  	cout << "неверный ввод";
  	return 0;
  }
}