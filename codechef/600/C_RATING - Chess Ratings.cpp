#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, o;
    cin >> m;
    while (m--) {
        cin >> n >> o;
        // Calculate the minimum games needed using ceiling division
        int games = (o - n + 7) / 8;
        cout << games << "\n";
    }
    return 0;
}