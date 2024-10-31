// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main() {
//   string line;
 
//     ifstream fin("copy_file.txt"); // окрываем файл для чтения
//     if (fin.is_open())
//     {
//         while (getline(fin, line))
//         {
//             for (char i : line) {
//                 if (isdigit(i)) {
//                     cout << i << endl;
//                 }
//     }

//         }
//     }
//     fin.close();     // закрываем файл
// } 


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    string line,stroka;
    line = "new_file.txt";
    ofstream fout(line);
    cout << "Введите строку\n";
    cin >> stroka;
    fout << stroka;
    fout.close();
    line = "new_file.txt";
    ifstream fin(line); // окрываем файл для чтения
    if (fin.is_open())
    {
        while (getline(fin, line))
        {
            for (char i : line) {
                if (isdigit(i)) {
                    cout << i << endl;
                }
            }

        }
    }
    fin.close();     // закрываем файл
}
