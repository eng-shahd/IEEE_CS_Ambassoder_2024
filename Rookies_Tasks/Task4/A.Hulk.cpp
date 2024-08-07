#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string r;
    
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            r += "I hate";
        } else {
            r += "I love";
        }
        if (i != n) {
            r += " that ";
        }
    }
    r += " it";
    cout << r << endl;
    
    return 0;
}
