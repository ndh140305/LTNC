#include <bits/stdc++.h>
using namespace std;
int main()
{
     int* p = new int;
     int* p2 = p;
     *p = 10;
     // delete p; du lieu p tro toi bi xoa nen *p2 truy cap se bi loi
     *p2 = 100;
     cout << *p2;
     delete p2;

}
