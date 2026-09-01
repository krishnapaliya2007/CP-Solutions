#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, o, p;
    cin >> m;

    while (m--) {
        cin >> n >> o >> p;
        cout << max(max(n, o), p) << endl;
    }
}