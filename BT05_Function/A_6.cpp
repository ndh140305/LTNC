#include <bits/stdc++.h>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   cout << &x << endl;
   // in địa chỉ của x tại đây 0x61fdec
}
void g(int yval)
{
   int y;
   cout << &y << endl;
   // in địa chỉ của y tại đây 0x61fdec


}
int main()
{
   f(7);
   g(11);
   return 0;
}

