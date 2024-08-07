#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> ratings(n);
    bool rated = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> ratings[i].first >> ratings[i].second;
        if (ratings[i].first != ratings[i].second) {
            rated = true;
        }
    }
    
    if (rated) {
        cout << "rated" << endl;
        return 0;
    }
    
    for (int i = 0; i < n - 1; ++i) {
        if (ratings[i].first < ratings[i + 1].first) {
            cout << "unrated" << endl;
            return 0;
        }
    }
    cout << "maybe" << endl;
    return 0;
}
