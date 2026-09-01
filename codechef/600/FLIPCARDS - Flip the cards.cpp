#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, X;
    cin >> T;

    while (T--) {
        cin >> N >> X;

        cout << min(X, N - X) << endl;
    }

    return 0;
}