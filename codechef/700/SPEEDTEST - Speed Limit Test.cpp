#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, X, B, Y;
        cin >> A >> X >> B >> Y;

        if (A * Y > B * X)
            cout << "ALICE\n";
        else if (A * Y < B * X)
            cout << "BOB\n";
        else
            cout << "EQUAL\n";
    }

    return 0;
}