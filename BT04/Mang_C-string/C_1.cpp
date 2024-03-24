#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0 ; i<n ; ++i){
        cin >> arr[i];
    }
    bool seen[n] = {0};
    for (int i:arr){
        if (seen[i]){
            cout << "YES";
            return 0;
        }
        seen[i]=true;
    }
    cout << "NO";
}
