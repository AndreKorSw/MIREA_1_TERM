#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double s, p, n, r, m;
    cout << "Введите s";
    cin >> s;
    cout << "Введите p";
    cin >> p;
    cout << "Введите n";
    cin >> n;
  
    if (s <= 0) {
    cout << "нельзя меньше 0 \n";
    }

    else if (p == 0) {
    m = s / (12 * n);
    }

    else {
    r = p / 100; 
    m = s * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
    }

    if (12 * (pow(1 + r, n) - 1) < 0) {
    cout << "нельзя на ноль \n";
    }

    cout << "m = " << m << endl;

    }
    