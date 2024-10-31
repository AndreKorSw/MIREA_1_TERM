#include <iostream> // Подключение библиотеки ввода - вывода
using namespace std; // Использование стандартного пространства имен

int main() { // Объявление функцииции
  setlocale(LC_ALL, "Russian"); // вывод русских букв
  int time, curtains, lamp;
  cout << "Введите время суток: 1 - день, 0 - ночь \n";
  cin >> time;
  cout << "Введите положение штор: 0 - раздвинуты, 1 - закрыты \n";
  cin >> curtains;
  cout << "Введите состояние лампы: 1 - включена, 0 - выключена \n";
  cin >> lamp;
  if (lamp == 1) {
    cout << "В комнате светло \n";
  }
  else if (time == 1 and curtains == 0) {
    cout << "В комнате светло \n";
  }
  else {
    cout << "В комнате темно \n";
  }

  return 0;
};