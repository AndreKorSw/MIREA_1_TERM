#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; // Числа меньше 2 не являются простыми
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return 1; 
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите число n: ";
    cin >> n;
    if (n < 2) {
        cout << "Число должно быть больше 2" << endl;
    }
    cout << "Простые числа от 2 до " << n << " - ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    cout << endl;
}