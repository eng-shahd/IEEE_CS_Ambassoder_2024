#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int c1 = n * a;
    int c2 = ((n + m - 1) / m) * b; 
    int min_cost = min(c1, c2);

    for (int i = 0; i <= (n + m - 1) / m; ++i) {
        int covered_by_special = i * m;
        int remaining_rides = max(0, n - covered_by_special);
        int cost = i * b + remaining_rides * a;
        min_cost = min(min_cost, cost);
    }
    
    cout << min_cost << endl;
    
    return 0;
}
