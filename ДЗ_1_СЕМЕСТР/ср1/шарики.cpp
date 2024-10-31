#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int totalBalls;
    cout << "Введите количество шариков: ";
    cin >> totalBalls;

    vector<int> balls(totalBalls); // номера шариков

    //вектор с номерами шариков от 1 до totalBalls
    for (int i = 0; i < totalBalls; ++i) {
        balls[i] = i + 1;
    }

    int count = 0; // Счетчик подходящих ситуаций

    // все перестановки шариков
    do {
        // проверяем каждую перестановку на совпадения
        for (int i = 0; i < totalBalls; ++i) {
            //совпадает ли номер шарика с его порядковым номером
            if (balls[i] == i + 1) {
                count++;
                break; // если совпало, то прерываем
            }
        }
    } while (next_permutation(balls.begin(), balls.end())); //след перестановка

    cout << "Общее количество ситуаций: " << count << endl;

    return 0;
}