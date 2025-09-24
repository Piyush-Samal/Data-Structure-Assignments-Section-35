#include <iostream>
#include <vector>
using namespace std;

void sumArray(vector<int> vec, int index, int &sum) {
    if (index == vec.size()) {
        return;
    }

    sum += vec[index];
    index++;
    sumArray(vec, index, sum);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int index = 0;
    int sum = 0;

    sumArray(vec, index, sum);
    cout << sum << endl;
    return 0;
}