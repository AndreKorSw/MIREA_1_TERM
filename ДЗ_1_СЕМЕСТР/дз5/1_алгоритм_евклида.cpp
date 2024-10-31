#include <iostream>
using namespace std;
int nod1(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Остаток от деления
        a = temp;
    }
    return a;

}

int nod2(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;  // Вычитаем меньшее из большего
        } else {
            b -= a;  // Вычитаем меньшее из большего
        }
    }
    return a;  
}

int main() {
    int num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;

    int result1 = nod1(num1, num2);
    cout << "Наибольший общий делитель(деление): " << result1 << endl;
    int result2 = nod2(num1, num2);
    cout << "Наибольший общий делитель(деление): " << result2 << endl;

    return 0;

    

}