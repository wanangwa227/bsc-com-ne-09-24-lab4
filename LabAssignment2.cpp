#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get dimensions from user
    do {
        cout << "Enter number of rows (max 3): ";
        cin >> rows;

        cout << "Enter number of columns (max 3): ";
        cin >> cols;

        if (rows > 3 || cols > 3) {
            cout << "Dimensions must not exceed 3. Please try again.\n";
        }

    } while (rows > 3 || cols > 3);

    // Dynamic allocation of 2D array
    double** array = new double*[rows];

    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Assign values to array
    cout << "\nEnter values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Display values
    cout << "\nArray contents:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}