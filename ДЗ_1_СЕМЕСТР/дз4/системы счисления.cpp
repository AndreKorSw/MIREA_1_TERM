#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int char_to_int(char s) {
	switch (s){
	case '0': return 0; break;
	case '1': return 1; break;
	case '2': return 2; break;
	case '3': return 3; break;
	case '4': return 4; break;
	case '5': return 5; break;
	case '6': return 6; break;
	case '7': return 7; break;
	case '8': return 8; break;
	case '9': return 9; break;
	case 'A': return 10; break;
	case 'B': return 11; break;
	case 'C': return 12; break;
	case 'D': return 13; break;
	case 'E': return 14; break;
	case 'F': return 15; break;
	}
	return -1;
}


string int_to_char(int s) {
	switch (s) {
	case 0: return "0"; break;
	case 1: return "1"; break;
	case 2: return "2"; break;
	case 3: return "3"; break;
	case 4: return "4"; break;
	case 5: return "5"; break;
	case 6: return "6"; break;
	case 7: return "7"; break;
	case 8: return "8"; break;
	case 9: return "9"; break;
	case 10: return "A"; break;
	case 11: return "B"; break;
	case 12: return "C"; break;
	case 13: return "D"; break;
	case 14: return "E"; break;
	case 15: return "F"; break;
	}
	return "";
}


double to_ten(string line, int base_num = 2) { // перевод в 10 с.с.
	double new_num = 0; // полученное число в 10 с.с.
	
	for (int i = 0; i < line.size(); i++) { // пробегание по всем цифрам
		int s = char_to_int(line[i]); // конвертированный символ в цифру
		new_num += s * pow(base_num, line.size() - i - 1); // запись в число цифры line[i]
	}
	
	return new_num;
}


string to_cc(int decimal, int base) {
    if (base < 2 || base > 16) {
        return "ошибка";
    }

    string result;
    do {
        int remainder = decimal % base;
        if (remainder < 10) {
            result.insert(result.begin(), '0' + remainder); // добавляем цифры 0-9
        } else {
            result.insert(result.begin(), 'A' + (remainder - 10)); // добавляем буквы A-F
        }
        decimal /= base;
    } while (decimal > 0);
    return result.empty() ? "0" : result; // возвращаем "0", если результат пуст
}



int main()
{
	string x;
	int old_ss, new_ss;
	cout << "Число" << endl;
	cin >> x;
	cout << "Старая система счисления" << endl;
	cin >> old_ss;
	cout << "Новая система счисления" << endl;
	cin >> new_ss;
	int num = to_ten(x, old_ss);
    cout << "В 10тичной сс" << num << endl;	
	cout << "Ответ" << to_cc(num, new_ss) << endl;
    return 0;
}