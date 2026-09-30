#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        set<int> occupied;

        for (int i = 0; i < M; i++) {
            int x;
            cin >> x;
            occupied.insert(x);
        }

        for (int i = 0; i < K; i++) {
            int seat = 1;

            while (occupied.count(seat))
                seat++;

            cout << seat << " ";
            occupied.insert(seat);
        }

        cout << "\n";
    }

    return 0;
}