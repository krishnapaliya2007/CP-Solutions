#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        int xDiff = abs(X1 - X2);
        int yDiff = abs(Y1 - Y2);

        cout << max(xDiff, yDiff) << endl;
    }

    return 0;
}