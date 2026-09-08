#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, N;
        cin >> X >> N;

        int required = (N + 99) / 100;

        cout << max(0, required - X) << "\n";
    }

    return 0;
}