
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int time = Y / X;

        cout << max(0, Z - time) << endl;
    }

    return 0;
}