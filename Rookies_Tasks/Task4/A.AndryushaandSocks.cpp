#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> socks(2 * n);
    for (int i = 0; i < 2 * n; ++i) {
        cin >> socks[i];
    }
    unordered_set<int> table;
    int max_socks_on_table = 0;
    
    for (int i = 0; i < 2 * n; ++i) {
        int sock = socks[i];
        if (table.find(sock) == table.end()) { 
            table.insert(sock);
        } else {
            table.erase(sock);
        }
        max_socks_on_table = max(max_socks_on_table, (int)table.size());
    }
    
    cout << max_socks_on_table << "\n";
    
    return 0;
}
