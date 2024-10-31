#include <iostream>
#include <vector>
using namespace std;

// Функция для пузырьковой сортировки
void bubbleSort(vector<double>& arr) {
    int n = arr.size();
    // Внешний цикл для прохода по всем элементам массива
    for (int i = 0; i < n - 1; i++) {
        // Внутренний цикл для сравнения соседних элементов
        for (int j = 0; j < n - i - 1; j++) {
            // Если текущий элемент больше следующего, обменяем их
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Функция для вывода массива
void printarr(const vector<double>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    vector<double> arr(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr);

    cout << "Отсортированный массив: ";
    printarr(arr);

    return 0;
}