#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for (int i=2 ; i<=sqrt(n) ; ++i){
        if (!(n%i)){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << boolalpha << isPrime(n) << endl;
    return 0;
}
