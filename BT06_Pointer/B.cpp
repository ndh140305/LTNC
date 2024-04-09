#include <bits/stdc++.h>
using namespace std;
int main(){
    //bai 1
char c = 'A', d = 'B';
char* p1 = &c;
char* p2 = &d;
char* p3;

p3 = &d;
cout << *p3 << endl << p3 << endl; //0y5678
p3 = p1;
cout << *p3 << endl << p3 << endl; //0x1234
*p1 = *p2;
cout << *p1 << endl << p1 << endl; //0x1234

// bai 2
int *p;
int i;
int k;
i = 4;
k = i;
p = &i;
k=5;
cout << i;
*p = 5; // gan i=5
cout << i;

//bai_3

/*char ca = 'c';
double *p = &ca;*/
//loi vi sai kieu du lieu
}
