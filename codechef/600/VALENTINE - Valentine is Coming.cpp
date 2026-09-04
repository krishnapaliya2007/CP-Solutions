#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,o;
    cin>>m;
    while(m--) {
        cin>>n>>o;
        if (n<o){
            cout<<"0"<<endl;
        }
        else {
            cout<<(n/o)<<endl;
        }
    }

}
