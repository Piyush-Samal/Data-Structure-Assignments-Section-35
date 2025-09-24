#include <iostream>
using namespace std;

void printSum(int n, int &sum) {
    if (n == 0) {
        return;
    }

    sum += n;
    printSum(n-1, sum);
}

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;
    int sum = 0;

    printSum(n, sum);
    cout << sum << endl;
    return 0;
}