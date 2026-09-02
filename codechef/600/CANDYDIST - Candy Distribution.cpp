#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,o;
    cin>>m;
    while(m--) {
        cin>>n>>o;
        int X=n/o ;
        if (n%o==0 && X%2==0) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }

}
