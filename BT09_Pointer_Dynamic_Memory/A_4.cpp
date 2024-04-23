#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    delete ptr; // loi do x ko dc cap phat dong bang new

    cout << x;
}
