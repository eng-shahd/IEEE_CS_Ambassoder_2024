#include <iostream>
#include <set>

using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size();
}

int main() {
    int y;
    cin >> y;

    int nextYear = y + 1;
    while (!hasDistinctDigits(nextYear)) {
        nextYear++;
    }

    cout << nextYear << endl;
    
    return 0;
}

