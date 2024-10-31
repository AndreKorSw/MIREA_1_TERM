#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, r, p;
double circle(double r) { // круг
	if (r <= 0) {
		return -1;	
	}
	return M_PI * pow(r, 2);
}

double rect(double a, double b) { // прямоугольник
	if (a <= 0 || b <= 0) {
		return -1;
	}
	return a * b;
}

double trin(double a, double b, double c) { // треугольник 
	if (a <= 0 or b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a) {
		return -1;
	}
	p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c) );
}


int main() {
	int s;
	cout << "-----------Выбери фигуру------------\n";
	cout << "1 (прямоугольник) / 2 (треугольник) / 3 (круг): ";
	cin >> s;
	switch (s) {
		case 1: // прямоугольник
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			cout << "S прямоугольника = " << rect(a, b) << endl;
			
		case 2: // треугольник
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			cout << "c = ";
			cin >> c;
			cout << "S квадрата = " << trin(a, b, c) << endl;
			
		case 3: // круг
			cout << "r = ";
			cin >> r;
			cout << "S круга = " <<  circle(r) << endl;
			
	}
}