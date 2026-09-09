#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int floorX = (X - 1) / 10 + 1;
        int floorY = (Y - 1) / 10 + 1;

        cout << abs(floorX - floorY) << "\n";
    }

    return 0;
}