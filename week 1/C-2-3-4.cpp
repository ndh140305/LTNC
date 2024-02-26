#include <bits/stdc++.h>
using namespace std;

void triangle_2 (int n){
    for (int i=1 ; i<=n ; ++i){
        for (int j=1 ; j<i ; ++j){
            cout << " ";
        }
        for (int j=i ; j<=n ; ++j){
            cout << "*";
        }
        cout << endl;
    }
}

void triangle_3 (int n){
    for (int i=1 ; i<=n ; ++i){
        for (int j=-n ; j<=n ; ++j){
            if (abs(j)<i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}


void triangle_4 (int n){
    for (int i=n ; i>=1 ; --i){
        for (int j=-n ; j<=n ; ++j){
            if (abs(j)<i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}


int main(){
    int n;
    cin >> n;
    triangle_2(n);
    triangle_3(n);
    triangle_4(n);
}
