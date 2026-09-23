#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int C[101];

        for (int i = 1; i <= N; i++) {
            cin >> C[i];
        }

        int ans = INT_MAX;

        for (int i = 1; i <= N; i++) {
            for (int j = i + 1; j <= N; j++) {

                // Check if every stall is illuminated
                if (i - K <= 1 && j + K >= N &&
                    j - i <= 2 * K + 1) {

                    ans = min(ans, C[i] + C[j]);
                }
            }
        }

        if (ans == INT_MAX) {
            cout << -1 << endl;
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}