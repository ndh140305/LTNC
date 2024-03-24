#include <bits/stdc++.h>
using namespace std;

string to_string_ (int x){
    string ans="";
    while (x>0){
        char digit = (x%10) + '0';
        ans = digit + ans;
        x/=10;
    }
    return ans;
}

bool is_palindromic (int x){
    if (x<10) return false;
    string x_ = to_string_ (x);
    for (int i=0 ; i<(x_.size()/2) ; ++i){
        if (x_[i] != x_[x_.size()-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    int a , b;
    for (int i=0 ; i<t ; ++i){
        int ans = 0;
        cin >> a >> b;
        for (int j=a ; j<=b ; ++j){
            if (is_palindromic(j)){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
