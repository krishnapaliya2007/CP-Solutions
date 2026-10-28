
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int count = 0;
        int streak = 0;

        for (int i = 0; i < N; i++) {
            if (i == 0 || S[i] == S[i - 1]) {
                streak++;
            } else {
                streak = 1;
            }

            if (streak == 3) {
                count++;
                streak = 0;
            }
        }

        cout << count << endl;
    }

    return 0;
}
