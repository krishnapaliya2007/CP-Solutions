#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,N;
    cin>>m;
    while(m--){
        cin>>N;
        if (N <= 10) {
    cout << "Lower Double"<<endl;
 }
else if (N <= 15) {
    cout << "Lower Single"<<endl;
}
else if (N <= 25) {
    cout << "Upper Double"<<endl;
}
else {
    cout << "Upper Single"<<endl;
}
    }
}
