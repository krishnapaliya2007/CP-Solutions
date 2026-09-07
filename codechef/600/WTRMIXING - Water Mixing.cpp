#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        if (A == B) {
            cout << "YES\n";
        }
        else if (B > A) {
            if (B - A <= X)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            if (A - B <= Y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}