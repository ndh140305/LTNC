#include <bits/stdc++.h>
using namespace std;

string convert_to_base_2 (int n)
{
    string ans;
    while (n>0)
    {
        char div = n%2 + '0';
        ans = div + ans;
        n/=2;
    }
    return ans;
}

int convert_to_base_10 (string n)
{
    int ans = 0;
    reverse(n.begin() , n.end());
    for (int i=0 ; i<n.size(); ++i)
    {
        ans += (n[i]-'0') * pow(2 , i);
    }
    return ans;
}
int main()
{
    string a;
    int b;
    while (1){
        cin >> a >> b;
        cout << convert_to_base_10(a) << " " <<convert_to_base_2(b) << endl;
    }
}
