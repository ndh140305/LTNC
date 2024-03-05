#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1 ; i<=n ; ++i){
        int j=i;
        for (j ; j<=n ; j++){
            cout << j << " ";
        }
        for (int k=1 ; k<i ; k++){
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}
