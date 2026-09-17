
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int start = 0, ltime = 0;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;

            if (s == "START38")
                start++;
            else
                ltime++;
        }

        cout << start << " " << ltime << endl;
    }

    return 0;
}