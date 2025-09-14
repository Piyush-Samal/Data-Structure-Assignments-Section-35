#include <iostream>
using namespace std;

void patternA (int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        sum += arr[0][i];
        cout << arr[0][i] << " ";
    }
    cout << endl;
    int middleRow = rows/2;
    for (int i = 1; i < rows; i++) {
        sum += arr[i][0];
        sum += arr[i][cols-1];
        for (int j = 0; j < cols; j++) {
            if (i == middleRow) {
                sum += arr[middleRow][j];
                cout << arr[middleRow][j] << " ";
            } else if (j == 0 || j == cols-1){
                cout << arr[i][j] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    sum -= arr[middleRow][0] + arr[middleRow][cols-1];
    cout << "Sum of the pattern is: " << sum << endl;
}

void patternX (int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i==j) {
                sum += arr[i][j];
                cout << arr[i][j] << " ";
            } else if (i+j == rows - 1) {
                sum += arr[i][j];
                cout << arr[i][j] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << "sum of the pattern is: " << sum << endl;
}

void patternZ (int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        sum += arr[0][i];
        cout << arr[0][i] << " ";
    }
    cout << endl;

    for (int i = 1; i < rows - 1; i++) {
        for (int j = 0; j < cols; j++) {
            if (i+j == rows - 1) {
                sum += arr[i][j];
                cout << arr[i][j] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    for (int j = 0; j < cols; j++) {
        sum += arr[rows-1][j];
        cout << arr[rows-1][j] << " ";
    }
    cout << endl;

    cout << "sum of the pattern is: " << sum << endl;
}

void patternD (int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < cols; i++) {
        sum += arr[0][i];
        cout << arr[0][i] << " ";
    }
    cout << endl;

    for (int i = 1; i < rows-1; i++) {
        sum += arr[i][0];
        sum += arr[i][cols-1];

        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                cout << arr[i][j] << " ";
            } else if (j == cols-1) {
                cout << arr[i][j] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    for (int j = 0; j < cols; j++) {
        sum += arr[rows-1][j];
        cout << arr[rows-1][j] << " ";
    }
    cout << endl;
    cout << "sum of the pattern is: " << sum << endl;
}

int main() {
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;

    cout << "Enter cols: ";
    cin >> cols;

    int arr[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element " << i << "," << j << ": ";
            cin >> arr[i][j];
        }
    }
    cout << "Original Matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    char ch;
    cout << "Enter Pattern: ";
    cin >> ch;

    switch (tolower(ch))
    {
    case 'x':
        patternX(arr, rows, cols);
        break;

    case 'a':
        patternA(arr, rows, cols);
        break;

    case 'd':
        patternD(arr, rows, cols);
        break;

    case 'z':
        patternZ(arr, rows, cols);
        break;

    default:
        cout << "choose a correct pattern!!" << endl;
        break;
    }
    return 0;
}