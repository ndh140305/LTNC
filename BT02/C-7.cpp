#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while (n>0){
        int prev=n;
        cin >> n;
        if (n==prev) continue;
        cout << n << " ";
    }
    return 0;
}
