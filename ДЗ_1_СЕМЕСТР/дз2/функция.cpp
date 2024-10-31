#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    double x, y, b, z;
    cout << "Введите x, y, z";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "b = ";
    cin >> b;
    
    if (b - y <= 0 or b - x < 0) {
        cout << "нельзя извлечь корень из отрицательного числа, логарифм не должен быть меньше или равен 0";
    }
    else {
    	z = log(b - y) * sqrt(b - x);
    	cout << "z = " << z;
	}

    return 0;
}