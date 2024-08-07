#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> denominations(n);
    for (int i = 0; i < n; ++i) {
        cin >> denominations[i];
    }
    
  
    if (find(denominations.begin(), denominations.end(), 1) != denominations.end()) {
        cout << -1 << endl;
        return 0;
    }

    int max_denomination = *max_element(denominations.begin(), denominations.end());

    vector<bool> can_be_formed(max_denomination * 2, false);
    can_be_formed[0] = true;
    
    for (int i = 0; i < max_denomination * 2; ++i) {
        if (can_be_formed[i]) {
            for (int d : denominations) {
                if (i + d < max_denomination * 2) {
                    can_be_formed[i + d] = true;
                }
            }
        }
    }

    for (int i = 1; i < max_denomination * 2; ++i) {
        if (!can_be_formed[i]) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
