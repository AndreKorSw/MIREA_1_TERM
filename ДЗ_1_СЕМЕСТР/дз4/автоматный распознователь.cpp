
#include <iostream>
#include <string>
using namespace std;


int digit(char x) { // римские числа в арабские
	switch(x) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
	return -1;
}


int convert(string x) {
	int i;
	int j = 0;
	int lenX;
	int result = 0;
	lenX = x.length() - 1;
	
	for(i = lenX; i >= 0; i--) {
		if (digit(x[i]) >= j)
			result += digit(x[i]);
		else
			result -= digit(x[i]);
		j = digit(x[i]);
	}
	return result;
}

int main() {
  string x;
  cout << "Number = ";
  cin >> x;
  cout << convert(x) << endl;
  main();
}// #include <iostream>
// #include <cmath>
// #include <map>
// #include <string>
// using namespace std;

// int  main() {
//     string number;
//     int res = 0;
//     cin >> number;
//     map<string, unsigned> integers;
//     integers["I"] = 1;
//     integers["V"] = 5;
//     integers["X"] = 10;
//     integers["L"] = 50;
//     integers["C"] = 100;
//     integers["D"] = 500;
//     integers["M"] = 1000;
    
//     if (integers[number]) {
//         cout << (integers[number]) << endl;
//     } else {
//         for (int i = number.length(); i <= 0; i--){
//             if (integers[number]){

//             };
//             // if (integers[number[i]] < integers[number[i+1]]){
//             //     res -= integers[number[i]];
//             // } else {
//             //     res += integers[number[i]];
//             // }

//         };
//         cout << res;
//     }

// }


         
//     //   бежим по длине строки
//     //         если значение i элемената по таблице меньше следующего, то из сумму вычитаем i элемент
                

// #include <iostream>
// using namespace std;


// int digit(char x) { // римские числа в арабские
// 	switch(x) {
// 		case 'I': return 1;
// 		case 'V': return 5;
// 		case 'X': return 10;
// 		case 'L': return 50;
// 		case 'C': return 100;
// 		case 'D': return 500;
// 		case 'M': return 1000;
// 	}
// 	return -1;
// }


// int convert(string x) {
// 	int i;
// 	int j = 0;
// 	int lenX;
// 	int result = 0;
// 	lenX = x.length() - 1;
	
// 	for(i = lenX; i >= 0; i--) {
// 		if (digit(x[i]) >= j)
// 			result += digit(x[i]);
// 		else
// 			result -= digit(x[i]);
// 		j = digit(x[i]);
// 	}
// 	return result;
// }

// int main() {
//   string x;
//   cout << "Number = ";
//   cin >> x;
//   cout << convert(x) << endl;
//   main();
// }
// #include <iostream>
// #include <map>
// using namespace std;

// map<char, int> romanToArabic = {
//     {'I', 1},
//     {'V', 5},
//     {'X', 10},
//     {'L', 50},
//     {'C', 100},
//     {'D', 500},
//     {'M', 1000}
// };

// int digit(char x) { // римские числа в арабские
//     if (romanToArabic.find(x) != romanToArabic.end()) {
//         cout << romanToArabic[x];
//     }

// }

// int convert(const string &x) {
//     int j = 0; // хранит значение текущей цифры
//     int result = 0;
//     int lenX = x.length();

//     for (int i = lenX - 1; i >= 0; i--) {
//         int currentDigit = digit(x[i]);
//         if (currentDigit >= j) {
//             result += currentDigit;
//         } else {
//             result -= currentDigit;
//         }
//         j = currentDigit;
//     }
//     return result;
// }

// int main() {
//     string x;
//     while (true) {
//         cout << "Number = ";
//         cin >> x;
//         cout << convert(x)-1 << endl;
//     }
//     return 0;
// }