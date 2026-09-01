#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, N, M;
    cin >> T;

    while (T--) {
        cin >> N >> M;

        if (M >= N)
            cout << N << endl;
        else
            cout << 2 * N - M << endl;
    }

    return 0;
}