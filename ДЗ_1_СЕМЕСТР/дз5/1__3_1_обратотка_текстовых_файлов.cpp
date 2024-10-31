#include <iostream>
#include <fstream> //для обработки файлов
using namespace std;
int main() {
    // in.txt (in), out.txt (out)
    ifstream in;
    ofstream out;
 
    in.open("in.txt", ios_base::in); 
    out.open("out.txt", ios_base::out);
 
    if (!in.is_open()) { 
        cout << "Error: can't open in file!\n";
        return 1;
    }
 
    char c, c1;
    cout << "Введите на что заменить пробелы: ";
    cin >> c1;
 
    while(!in.eof()) {
        in.get(c);
        if (c == ' ')
            out.put(c1);
        else
            out.put(c);
    }
 
    in.close();
    out.close();
    return 0;
}