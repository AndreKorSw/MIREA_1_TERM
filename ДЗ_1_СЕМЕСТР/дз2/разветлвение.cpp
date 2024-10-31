#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    double x, a , w;
    cin >> x >> a;
    if (x == 0) {
      cout << "X не должен быть равен )" << endl;
    }
    else if (abs(x) < 1) {
      w = a * log(abs(x));
      cout << w << endl;
    }
    else if (a - pow(x, 2) < 0) {  // проверка перед корнем
      cout << "Невозможно извелчь корень из отрицательного числа" << endl;
    }
    else {
      w = sqrt(a - pow(x, 2));
      cout << w << endl;
    }
}