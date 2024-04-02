#include <bits/stdc++.h>
using namespace std;

void tri (int n){
    for (int i=0 ; i<n ; ++i){
        for (int j=-n ; j<=n ; ++j){
            if (abs(j) <= abs(i)){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    tri(n);
    return 0;
}
