#include <bits/stdc++.h>
using namespace std;

int out[4] = {1, 2, 3, 4}; // int out_[3] = {1, 2, 3, 4};
int a[]={1, 2, 3, 4};
int main(){
    int in[4] = {1, 2, 3, 4}; // int in_[3] = {1, 2, 3, 4};
    for (int i:a) cout << i << " ";
    cout << endl;
    for (int i:in) cout << i << " ";
    cout << endl;
    for (int i:out) cout << i << " ";
    return 0;
}
