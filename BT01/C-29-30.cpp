#include <bits/stdc++.h>
using namespace std;

void bai_29 (int n){
    for (int i=1 ; i<=n ; ++i){
        for (int j=1 ; j<=i ; ++j){
            cout << "*";
        }
        cout << endl;
    }
    return;
}

void bai_30 (int n){
    for (int i=n ; i>=1 ; --i){
        for (int j=1 ; j<=i ; ++j){
            cout << "*";
        }
        cout << endl;
    }
    return;
}

int main(){
    int n;
    cin >> n;
    bai_29(n);
    cout << endl;
    bai_30(n);
    return 0;
}

