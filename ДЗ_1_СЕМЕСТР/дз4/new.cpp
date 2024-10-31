#include <iostream>
#include <string>
#include <cmath>
using namespace std;
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
int main(int num, int base_num = 2) { // перевод в нужную с.с.
	string new_num = int_to_char(num % base_num);
	
	if (num > 0) {
		cout << main(num / base_num) + new_num; 
	}
    cout << new_num;
}