#include <iostream>
#include <string>
using namespace std;

void printReverse(string str, int index) {
    if (index == -1) {
        return;
    }

    cout << str[index];
    index--;
    printReverse(str, index);
}

int main() {
    cout << "Enter string: ";
    string str;
    cin >> str;
    int index = str.length() - 1; 

    printReverse(str, index);
    return 0;
}