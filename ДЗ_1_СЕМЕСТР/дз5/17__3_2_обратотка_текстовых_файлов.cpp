using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");
    
    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Ошибка при открытии файла!" << endl;
        return 1;
    }

    vector<string> words;
    string word;

    // Чтение слов из файла
    while (inputFile >> word) {
        words.push_back(word);
    }

    // Сортировка слов
    sort(words.begin(), words.end());

    // Запись отсортированных слов в новый файл
    for (const auto& w : words) {
        outputFile << w << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Слова отсортированы и записаны в output.txt" << endl;

    return 0;
}
