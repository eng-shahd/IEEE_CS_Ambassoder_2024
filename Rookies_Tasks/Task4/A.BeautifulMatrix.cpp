#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
        }
    }

    int row, col;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (matrix[i][j] == 1) {
                one_row = i + 1; 
                one_col = j + 1; 
                break;
            }
        }
    }
    int moves = abs(row - 3) + abs(col - 3);
    cout << moves << endl;
    
    return 0;
}
