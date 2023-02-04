//
// Created by Varun Chawla on 04/02/23.
//

#include <iostream>
using namespace std;

void pattern1() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1) {

        // Print empty spaces.
        for (int col = 0; col < (n - row - 1); col = col + 1) {
            cout << " ";
        }

        // Print the stars.
        for (int col = 0; col < (row + 1); col = col + 1) {
            cout << "*";

            // Print the gap in-between the stars.
            if (col != row) {
                cout << " ";
            }
        }

        // Print new line, until the last row is reached.
        if (row != (n - 1))
            cout << endl;
    }
}
