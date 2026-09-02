#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,o,p;
    cin>>m;
    while (m--) {
        cin>>n>>o>>p;
        if (p>o){
            int X= p/o;
            if(X<n) {
                cout<<X<<endl;
            }
            else {
                cout<<n<<endl;
            }
        }
        else {
            cout<<"0"<<endl;
        }
    }
}

