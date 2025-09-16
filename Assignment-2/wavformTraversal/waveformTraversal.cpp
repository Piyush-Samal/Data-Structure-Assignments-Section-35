#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter no of rows: ";
    cin >> n;
    cout << "Enter no of columns: ";
    cin >> m;

    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element " << "(" << i+1 << "," << j+1 << "): ";
            cin >> arr[i][j];
        }
    }

    cout << "INPUT ARRAY: "<< endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int waveForm[100];
    int index = 0;
    int count = 1;
    for (int i = 0; i < m; i++) {
        if (count % 2 == 0) {
            for (int j = n-1; j >= 0; j--) {
                waveForm[index] = arr[j][i];
                index++;
            }
        }
        if (count % 2 != 0) {
            for (int j = 0; j < n; j++) {
                waveForm[index] = arr[j][i];
                index++;
            }
        }
        count++;
    }
    cout << endl;
    cout << "OUTPUT ARRAY: " << endl;
    for (int i = 0; i < n*m; i++) {
        cout << waveForm[i] << " ";
    }
    cout << endl;
    return 0;
}