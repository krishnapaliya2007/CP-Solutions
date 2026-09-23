
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int count = 0;
        bool easy = true;

        for (int i = 0; i < N; i++) {
            char ch = S[i];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                count = 0;
            }
            else {
                count++;

                if (count >= 4) {
                    easy = false;
                    break;
                }
            }
        }

        if (easy)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
