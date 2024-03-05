#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while (1){
        if (n==-1){
            cout << "Bye";
            break;
        }
        cin >> n;
        if (n>=0 && n%5==0){
            cout << n/5 << endl;
        }
    }
    return 0;
}
