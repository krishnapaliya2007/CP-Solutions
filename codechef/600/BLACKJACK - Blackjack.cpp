#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,o;
    cin>>m;
    while (m--) {
        cin>>n>>o;
        int S= 21-(n+o) ;
        if (S>=1 && S<=10) {
            cout<<S<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }
    }

}
