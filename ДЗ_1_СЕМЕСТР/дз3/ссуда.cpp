#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double S,n, month, r, m , rtemp = 0.0001; 
    cout << "----------------------- \n";
    cout << "S = ";
    cin >> S;
    cout << "n = ";
    cin >> n;
    cout << "month = ";
    cin >> month;
    

    if (n == 0 or S <= 0) { // на 0 делить нельзя!
    cout << "некоректные данные \n";
    main();
    }

    while (m < month) { // находим когда выплаты будут больше заданного, и выводим нужный %
    r = rtemp;
    m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1)); // подсчёт m с течением времени
    rtemp = rtemp + 0.0001;
    }

    cout << "p = " << r * 100 << "%" << endl;  
    main();
}