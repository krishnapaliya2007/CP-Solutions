#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        vector<int> v = {A, B, C};

        sort(v.begin(), v.end());

        cout << v[1] << endl;
    }

    return 0;
}