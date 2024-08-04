#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sizes[n];

    for (int i = 0; i < n; ++i) {
        cin >> sizes[i];
    }

    int last_size = sizes[n - 1];
    
    if (last_size == 15) {

        cout << "DOWN" << endl;
    } else if (last_size == 0) {

        cout << "UP" << endl;
    } else {

        if (sizes[n - 1] > sizes[n - 2]) {
            cout << "UP" << endl;
        } else {
            cout << "DOWN" << endl;
        }
    }
    
    return 0;
}
