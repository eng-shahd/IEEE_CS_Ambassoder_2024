#include <iostream>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int c = n * a;
    int k = (n + m - 1) / m; 
    int minCost = c;
    for (int i = 0; i <= k; ++i) {
        int t = i * m; 
        int r = n - t; 
        if (r < 0) {
            r = 0; 
        }
        int totalCost = i * b + r * a;
        
      
        if (totalCost < minCost) {
            minCost = totalCost;
        }
    }

    
    cout << minCost << endl;
    
    return 0;
}
