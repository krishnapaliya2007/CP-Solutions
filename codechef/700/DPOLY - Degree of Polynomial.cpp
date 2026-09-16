#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x != 0)
                ans = i;
        }

        cout << ans << endl;
    }

    return 0;
}