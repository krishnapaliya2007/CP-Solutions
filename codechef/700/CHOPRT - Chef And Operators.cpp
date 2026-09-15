#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        if (A < B)
            cout << "<\n";
        else if (A > B)
            cout << ">\n";
        else
            cout << "=\n";
    }

    return 0;
}