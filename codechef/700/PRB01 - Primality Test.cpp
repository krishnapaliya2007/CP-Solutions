
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        bool prime = true;

        if (N < 2)
            prime = false;

        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}