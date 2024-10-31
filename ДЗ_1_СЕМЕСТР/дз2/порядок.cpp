#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double N;
    cout << "N = "; 
    cin >> N;
    N = ceil(N);
    if (N <= 0) { // проверка N на натуральное число
        cout << "N не натуральное";
        
        for (int i = 1; i <= 10; i++) { 
            cout << i << endl;
        }
    } else {
        for (int i = 0; i < 10; i++) { // вывод 10 натуральных чисел
            cout << N++ << endl;
        }
    }
    return 0;
}