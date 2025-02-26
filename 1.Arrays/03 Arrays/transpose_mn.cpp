#include <iostream>
using namespace std;

void transpose(int arr1[][3], int row, int col, int arr2[][4]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr2[j][i] = arr1[i][j];
        }
    }
}

void printarray(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int arr[4][3] = {{10, 12, 15}, {19, 17, 24}, {26, 29, 22}, {30, 33, 36}};
    int transarray[3][4]; // Adjusted for a 4x3 matrix

    cout << "Original Array:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    transpose(arr, 4, 3, transarray);

    cout << "Transposed Array:" << endl;
    printarray(transarray, 3, 4);

    return 0;
}
