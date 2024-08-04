#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int n, sh, c;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    sort(arr, arr + n);
 
    cin >> sh;
    while (sh--) {
        cin >> c;
 
       
        if (c < arr[0]) {
            cout << 0 << endl;
            continue;
        }
 
        int l = 0, h = n - 1;
        int index = n; 
        while (l <= h) {
            int m = l + (h - l) / 2;
 
            if (arr[m] > c) {
                index = m; 
                h = m - 1; 
            } else {
                l = m + 1;
            }
        }
 
       
        cout << index << endl;
    }
 
    return 0;
}
