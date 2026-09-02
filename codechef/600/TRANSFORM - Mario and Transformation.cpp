#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m;
    while(m--) {
        cin>>n;
        if (n%3==0) {
            cout<<"normal"<<endl;
        }
        else if (n % 3 == 1) {
            cout<<"huge"<<endl;
        }
        else {
            cout<<"small"<<endl;
        }
    }

}
