#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, M;
        cin >> N >> K >> M;

        int capacity = K * M;

        int bags = (N + capacity - 1) / capacity;

        cout << bags << endl;
    }

    return 0;
}