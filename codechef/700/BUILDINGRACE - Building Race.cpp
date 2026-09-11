#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        if (A * Y < B * X)
            cout << "Chef" << endl;
        else if (A * Y > B * X)
            cout << "Chefina" << endl;
        else
            cout << "Both" << endl;
    }

    return 0;
}