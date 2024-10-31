#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, summa;
    for (int i = 1; i <= 5; i++){
        cout << "Введите число  ";
        cin >> a;
        summa += a;
        cout << "Введено чисел: " << i << " " << "Сумма: " << summa << " " << "Сред.арифметическое: " << summa / i << " " << endl;

    }
}