#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int min=x;
    int max=x;
    int sum=x;
    for (int i=1 ; i<n ; ++i){
        cin >> x;
        if (x<min){
            min=x;
        }
        if (max<x){
            max=x;
        }
        sum+=x;
    }
    cout << "min: " << min << endl << "max: " << max << endl << "mean: " << (double)sum/n << endl;
}

