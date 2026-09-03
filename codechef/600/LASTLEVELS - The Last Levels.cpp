#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, x, y, z;
    cin >> m;
    while (m--) {
        cin >> x >> y >> z;
        int A = 0;
        
        if (x % 3 == 0) {
            A = (x / 3) - 1;
        } else {
            A = x / 3;
        }
        
        cout << (x * y) + (z * A) << endl;
    }
    return 0;
}