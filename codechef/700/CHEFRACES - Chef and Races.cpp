#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;

        int common = 0;

        if (X == A || X == B)
            common++;

        if (Y == A || Y == B)
            common++;

        cout << 2 - common << endl;
    }

    return 0;
}