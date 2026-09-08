#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int count = 0;

        for (int i = 0; i < N; i++) {
            int age;
            cin >> age;

            if (age >= 10 && age <= 60) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}