#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int maxLen = 100;
    char *str = new char[maxLen];

    cout << "Enter a string: ";
    cin.getline(str, maxLen);

    int len = strlen(str);
    char *reversed = new char[len + 1];

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';

    cout << "Reversed string: " << reversed << endl;

    delete [] str;
    delete [] reversed;
    return 0;
}