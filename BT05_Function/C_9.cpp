#include <bits/stdc++.h>
using namespace std;

int num_lower_than_n (int n){
    return rand()%n;
}
int main(){

    int n;
    while (1)
    {
        cin >> n;
        cout << num_lower_than_n (n) << endl;
    }
}
