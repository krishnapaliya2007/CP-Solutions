#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A[3], B[3];

        for (int i = 0; i < 3; i++)
            cin >> A[i];

        for (int i = 0; i < 3; i++)
            cin >> B[i];

        sort(A, A + 3);
        sort(B, B + 3);

        int alice = A[1] + A[2];
        int bob = B[1] + B[2];

        if (alice > bob)
            cout << "Alice\n";
        else if (bob > alice)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }

    return 0;
}