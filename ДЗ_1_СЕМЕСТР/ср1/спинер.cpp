#include <iostream>
using namespace std;


int main() {
    cout << "Введите А, Б, С" << endl;
    int A, B, C;
    cin >> A >> B >> C;
    int N = (C - A) / B; // макс количество лопостей
    cout << N;


}