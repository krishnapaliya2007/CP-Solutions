#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        int normal = (H + X - 1) / X;

        int remaining = H - Y;
        int special = 1 + (remaining + X - 1) / X;

        cout << min(normal, special) << endl;
    }

    return 0;
}