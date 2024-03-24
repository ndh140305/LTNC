#include <bits/stdc++.h>
using namespace std;
int main(){
    char arr[5] {'t' , 't' , 'f' , 'e' , 'e'};
    for (int i=-1 ; i<6 ; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
    cin >> arr[6];
    cin >> arr[-1];
    cin >> arr[-9];
    for (int i=-1 ; i<6 ; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
    char a[3][4] {};
    for (int i=0 ; i<5 ; ++i){
        for (int j=0 ; j<4 ; ++j){
            cin >> a[i][j];
        }
    }
    for (int i=0 ; i<5 ; ++i){
        for (int j=0 ; j<4 ; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
