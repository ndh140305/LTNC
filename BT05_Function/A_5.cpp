#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int& b = a;
    cout << &a << endl << &b << endl; // cung la 1 bien

    // int& c; khong the khai bao ma ko chieu toi bien thg
    int c = 20;
    b = c;
    cout << b;
    // khong the chieu sang bien khac
}
