#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k;
    if (n % 2 == 0) {

        k = n / 2;
    } else {
        k = (n - 3) / 2 + 1;
    }

    cout << k << endl;

    if (n % 2 == 0) {
        for (int i = 0; i < k; ++i) {
            cout << 2 << " ";
        }
    } else {
        cout << 3 << " ";
        for (int i = 0; i < (n - 3) / 2; ++i) {
            cout << 2 << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
