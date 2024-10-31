using namespace std;
#include <iostream>
#include <fstream>
#include <sstream> 
#include <vector>
#include <algorithm>

struct Contact {
    string lastName;
    string phoneNumber;
};

// является ли номер счастливым
bool isLuckyNumber(const string& phoneNumber) {
    if (phoneNumber.length() != 11) return false; 
    
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < 5; i++) {
        leftSum += phoneNumber[i] - '0'; // Сумма левой части
        rightSum += phoneNumber[i + 6] - '0'; // Сумма правой части
    }

    return leftSum == rightSum;
}

// Сравнение двух контактов по фамилии
bool compareByLastName(const Contact& a, const Contact& b) {
    return a.lastName < b.lastName;
}


int main() {
    ofstream outFile("phone.txt");
    outFile << "Ivanov 1233211234\n";
    outFile << "Petrov 79773774202\n";
    outFile << "Sidorov 79773774203\n";
    outFile << "Vasiliev 43210432104\n";
    outFile.close();

    ifstream inFile("phone.txt");
    vector<Contact> luckyContacts;
    string line;

    while (getline(inFile, line)) {
        istringstream iss(line);
        Contact contact;
        if (iss >> contact.lastName >> contact.phoneNumber) {
            if (isLuckyNumber(contact.phoneNumber)) {
                luckyContacts.push_back(contact);
            }
        }
    }
    inFile.close();

    // Сортировка по фамилии
    sort(luckyContacts.begin(), luckyContacts.end(), compareByLastName);

    // Запись счастливых контактов в другой файл
    ofstream luckyFile("lucky_contacts.txt");
    for (const auto& contact : luckyContacts) {
        luckyFile << contact.lastName << " " << contact.phoneNumber << "\n";
    }
    luckyFile.close();

    return 0;
}
