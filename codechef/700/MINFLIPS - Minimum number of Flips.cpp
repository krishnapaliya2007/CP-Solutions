#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ones = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == 1)
                ones++;
        }

        if (N % 2 != 0)
            cout << -1 << endl;
        else
            cout << abs(ones - N / 2) << endl;
    }

    return 0;
}