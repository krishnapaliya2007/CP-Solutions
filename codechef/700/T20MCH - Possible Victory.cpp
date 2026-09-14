#include <iostream>
using namespace std;

int main() {
    int R, O, C;
    cin >> R >> O >> C;

    int maxScore = C + (20 - O) * 36;

    if (maxScore > R)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}