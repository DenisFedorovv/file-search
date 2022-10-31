#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string path;

    ifstream inputFile;

    do {
        cout << "Имя файла: ";
        getline(cin, path);
        inputFile.open(path.c_str());
        if (inputFile.is_open()) {
            break;
        }
        cout << "Не удалось найти файл\n" << path << endl;
    } while (true);

    string tempString;

    size_t stringCount = 0;

    while (getline(inputFile, tempString)) {
        cout << setw(3) << setfill('0') << right << (++stringCount) << ". " << tempString << "\n";
    }
}