#include <bits/stdc++.h>
using namespace std;

char daytab[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};

char daytab_[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};


int main(){
    for (int i=0 ; i<12 ; ++i){
        for (int j=0 ; j<2 ; ++j){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    for (int i=0 ; i<12 ; ++i){
        for (int j=0 ; j<2 ; ++j){
            cout << daytab_[i][j] << " ";
        }
        cout << endl;
    }
}
