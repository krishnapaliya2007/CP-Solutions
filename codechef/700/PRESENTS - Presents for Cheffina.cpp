#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        cout << (N / 5) * 4 + (N % 5) << endl;
    }

    return 0;
}