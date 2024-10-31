#include <iostream>
#include <cmath>
using namespace std;

int main() {

	setlocale(LC_ALL, "RUSSIAN");
    double x, y;
    for (x = -4; x <= 4; x += 0.5) {
        y = (x * x - 2 * x + 2) / (x - 1); 
		if (x - 1 == 0) { // проверка деления на ноль
			cout << "y(" << x << ") = " << "Деление на ноль" << endl;
		}
		else {
			cout << "y(" << x << ") = " << y << endl;
		}
	}
    return 0;
	
}
