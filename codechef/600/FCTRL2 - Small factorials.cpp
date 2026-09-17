
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans[200] = {0};
        ans[0] = 1;
        int size = 1;

        for (int i = 2; i <= N; i++) {
            int carry = 0;

            for (int j = 0; j < size; j++) {
                int product = ans[j] * i + carry;
                ans[j] = product % 10;
                carry = product / 10;
            }

            while (carry) {
                ans[size] = carry % 10;
                carry /= 10;
                size++;
            }
        }

        for (int i = size - 1; i >= 0; i--)
            cout << ans[i];

        cout << endl;
    }

    return 0;
}