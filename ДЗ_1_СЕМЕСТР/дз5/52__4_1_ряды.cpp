#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, det;
    double mat[2][2];
    cout << "Задайте матрицу 2х2" << endl;
    for (int x = 0; x < 2; x++) {
        for(int y = 0; y < 2; y++) {
            cout << "Введите число: " << endl;
            cin >> a;
            mat[x][y] = a;
        }
    }
    det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    cout << "Определитель матрицы: " << endl;
    cout << mat[0][0] << "   " << mat[0][1] << endl;
    cout << mat[1][0] << "   " << mat[1][1] << endl;
    cout << "Равен: " << det << endl;
    
    
    


}