#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int A[100];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int remaining = N - K;

        int sum = 0;

        for (int i = 0; i < remaining; i++) {
            sum += A[i];
        }

        int maximum = sum;

        for (int i = remaining; i < N; i++) {
            sum = sum - A[i - remaining] + A[i];

            if (sum > maximum) {
                maximum = sum;
            }
        }

        cout << maximum << endl;
    }

    return 0;
}