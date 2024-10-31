// // #include <iostream>
// // #include <fstream>
// // #include <string>
// // using namespace std;

// // int main() {
// //   string line;
 
// //     ifstream fin("copy_file.txt"); // окрываем файл для чтения
// //     if (fin.is_open())
// //     {
// //         while (getline(fin, line))
// //         {
// //             for (char i : line) {
// //                 if (isdigit(i)) {
// //                     cout << i << endl;
// //                 }
// //     }

// //         }
// //     }
// //     fin.close();     // закрываем файл
// // } 




// #include <iostream>
// #include <fstream>
//  using namespace std;
// int main(){
//     string a;
    
//     ofstream out;          // поток для записи
//     out.open("hello.txt");      // открываем файл для записи
//     if (out.is_open())
//     {
//         for (int i = 0; i < 10; i++){
//             cin >> a;
//             out << a << endl;     
//         }        
//     }
//     out.close(); 
//     cout << "файл записан" << endl;

//     cout << "открыт на чтение" << endl;
//     string line;
//     double cnt = 0, digital = 0;
//     ifstream in("hello.txt"); // окрываем файл для чтения
//     if (in.is_open())
//     {
//          while (getline(in, line))
//         {
//            in >> digital;
//            cnt += digital;

//         }
//     }
//     in.close(); 
//     cout << cnt << endl; 
// }
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
   setlocale(LC_ALL, "RU");
   double a,res = 0;
   ofstream out;         // поток для записи
   out.open("TextFile1.txt");      // открываем файл для записи
   if (out.is_open())
   {
       for (int i = 0; i < 10; i++) {
           cin >> a;
           res += a;
           out << a << endl;
       }
   }
   out.close();
   cout << "файл записан" << endl;

   cout << "открыт на чтение" << endl;
   string line;
   double cnt = 0, digital = 0;
   ifstream in("TextFile1.txt"); // окрываем файл для чтения
   if (in.is_open())
   {
       while (getline(in, line))
       {
           in >> digital;
           cnt += digital;

       }
   }
   in.close();
   cout << res << endl;
}
