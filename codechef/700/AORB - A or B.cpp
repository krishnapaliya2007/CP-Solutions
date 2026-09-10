#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int A = (500 - 2 * X) + (1000 - 4 * (X + Y));
        int B = (1000 - 4 * Y) + (500 - 2 * (X + Y));

        cout << max(A, B) << endl;
    }

    return 0;
}