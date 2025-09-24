#include <iostream>
using namespace std;

int countStairs(int n) {
    if (n == 0 || n == 1)
        return 1;

    return countStairs(n - 1) + countStairs(n - 2);
}

int main() {
    int stairs;
    cout << "Enter number of stairs: ";
    cin >> stairs;

    cout << countStairs(stairs) << endl;

    return 0;
}
