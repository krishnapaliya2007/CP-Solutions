#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,o;
    cin>>m;
    while(m--) {
        cin>>n>>o;
        int X=(n-o);
        if (X<0) {
            cout<< X*(-1)<<endl ;
        }
        else {
            cout<<X<<endl;
        }
    }
    

}
