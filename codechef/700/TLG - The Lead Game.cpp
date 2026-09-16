#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int score1 = 0, score2 = 0;
    int maxLead = 0, winner = 0;

    while (N--) {
        int S, T;
        cin >> S >> T;

        score1 += S;
        score2 += T;

        int lead = abs(score1 - score2);

        if (lead > maxLead) {
            maxLead = lead;

            if (score1 > score2)
                winner = 1;
            else
                winner = 2;
        }
    }

    cout << winner << " " << maxLead << endl;

    return 0;
}