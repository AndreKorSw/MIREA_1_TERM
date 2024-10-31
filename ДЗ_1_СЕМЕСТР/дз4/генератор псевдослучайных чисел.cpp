#include <iostream>
using namespace std;

int main()
{

	int m1 = 37;
	int b1 = 3;
	int c1 = 64;
	int m2 = 25173;
	int b2 = 13849;
	int c2 = 65537;
	int i; // ввод i
	int temp_i1 = 0; // временный i
	int temp_i2 = 0; // временный i
	cout << "i = ";
	cin >> i;
	int s1[i]; // создание ячеек для чисел 1 варианта
	int s2[i]; // создание ячеек для чисел 2 варианта
	s1[0] = 0;
	s2[0] = 0;
	
	while (temp_i1 != i + 1) {
		cout << temp_i1 << ") " << s1[temp_i1] << endl;
		s1[temp_i1 + 1] = (m1 * s1[temp_i1] + b1) % c1;	
		temp_i1 += 1;
	}
	cout << "--------\n";
	while (temp_i2 != i + 1) {
		cout << temp_i2 << ") " << s2[temp_i2] << endl;
		s2[temp_i2 + 1] = (m2 * s2[temp_i2] + b2) % c2;	
		temp_i2 += 1;
	}
	cout << "--------\n";
	cout << temp_i1 << ") " << s1[temp_i1] << endl;
	cout << temp_i2 << ") " << s2[temp_i2] << endl;
    return 0;
}