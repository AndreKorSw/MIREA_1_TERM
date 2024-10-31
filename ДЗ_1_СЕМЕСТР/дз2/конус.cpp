#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double R, r, h; // нижнее основание // верхнее основание // высота
    cout << "Введите радиус нижнего основания, радиус верхнего основания, высоту:";
    cout << "R = ";
    cin >> R;
    cout << "r = ";
    cin >> r;
    cout << "h = ";
    cin >> h;
    if (R <= 0 or r <= 0 or h <= 0) {
      cout << "Невозможно вычислить";
    } else {
    float l = sqrt(pow(fabs((R-r)), 2) + pow(h, 2));
    float S = 3.14 * (pow(R, 2) + (R + r) * l + pow(r, 2));
    float V = 0.3333333333 * 3.14 * h * (pow(R, 2) + R * r + pow(r, 2));
    cout << "S = " << S << endl; // площадь полной поверхности1
    cout << "V = " << V << endl; // объем
    }
    return 0;

}