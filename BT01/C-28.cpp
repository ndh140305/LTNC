#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i=0 ; i<24 ; ++i){
        if (i==0){
            cout << "12 midnight" << endl ;
        }
        else if (i<12){
            cout << i << "a.m" << endl ;
        }
        else if (i==12){
            cout << "12 noon" << endl ;
        }
        else {
            cout << i-12 << "p.m" << endl;
        }
    }
    return 0;
}
