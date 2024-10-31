#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  setlocale(LC_ALL, "RUSSIAN");
  string alph;
  cout << "Введите строку из 30 символов" << endl;
  cin >> alph;
  if (alph.length() != 30){
    cout << "Длина строки должна быть 30 символов";
  } 
  else {
    sort(alph.begin(), alph.end()); 
    cout << alph;
  }
}

// bsdrghydwedqwelkaxceriaeropscm