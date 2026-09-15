#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, K;
        cin >> A >> B >> K;

        int distance = abs(A - B);

        cout << (distance + K - 1) / K << endl;
    }

    return 0;
}