#include <iostream>
using namespace std;

int main() {
    long long M;
    cin >> M;
    // Ищем количество спиннеров с 3 и 4 лопастями
    for (long long threeBlades = 0; threeBlades <= M / 3; ++threeBlades) {
        long long remainingBlades = M - threeBlades * 3;
        if (remainingBlades % 4 == 0) {
            long long fourBlades = remainingBlades / 4;
            cout << threeBlades << " " << fourBlades << endl;
            return 0;
        }
    }

    // Если не нашли решение
    cout << "нет решения" << endl;
    return 0;
}


