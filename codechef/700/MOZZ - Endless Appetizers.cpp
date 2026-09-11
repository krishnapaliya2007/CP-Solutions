#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;

        int sticks = X + R / 30;

        int plates = (sticks + Y - 1) / Y;

        cout << plates << endl;
    }

    return 0;
}