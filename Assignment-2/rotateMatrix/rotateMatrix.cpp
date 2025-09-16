#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter no of rows: ";
    cin >> n;
    cout << "Enter no of columns: ";
    cin >> m;

    int arr[100][100];
    int rotated[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element " << "(" << i+1 << "," << j+1 << "): ";
            cin >> arr[i][j];
        }
    }

    cout << "INPUT ARRAY: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rotated[j][n - 1 - i] = arr[i][j];
        }
    }

    cout << "ROTATED ARRAY: " << endl;
    for (int i = 0; i < m; i++) {   
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
