#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X % 5 != 0) {
            cout << -1 << "\n";
        }
        else {
            cout << (X + 9) / 10 << "\n";
        }
    }

    return 0;
}