#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;  
    vector<int> numbers(n);
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
        if (numbers[i] % 2 != 0) {
            smallest_odd = min(smallest_odd, numbers[i]);
        }
    }
    if (sum % 2 == 0) {
        cout << sum << endl;
    } else {
        
        if (smallest_odd == INT_MAX) {

            cout << 0 << endl;
        } else {
            cout << sum - smallest_odd << endl;
        }
    }

    return 0;
}
