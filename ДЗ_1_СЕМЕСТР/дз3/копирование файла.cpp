#include <iostream>
#include <fstream>

using namespace std;
int main() {
  setlocale(LC_ALL, "RUSSIAN");
  string line;
 
    ifstream in("copy_file.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();     // закрываем файл
}