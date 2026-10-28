
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int alarms = 0;
        int lastProtected = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == '1' && i >= lastProtected) {
                alarms++;
                lastProtected = i + K + 1;
            }
        }

        cout << alarms << endl;
    }

    return 0;
}
