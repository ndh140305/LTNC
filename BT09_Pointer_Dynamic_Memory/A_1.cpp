#include <bits/stdc++.h>
using namespace std;

char* concat(const char* a, const char* b)
{
    int lenA = 0;
    for (int i=0 ; *(a+i) != '\0' ; ++i){
        lenA++;
    }
    int lenB = 0;
    for (int i=0 ; *(b+i) != '\0' ; ++i){
        lenB++;
    }
    char* res = new char(lenA + lenB + 1);
    int id = 0;
    for (int i=0 ; *(a+i) != '\0' ; ++i){
        *(res+id) = *(a+i);
        id++;
    }
    for (int i=0 ; *(b+i) != '\0' ; ++i){
        *(res+id) = *(b+i);
        id++;
    }
    *(res+id) = '\0';
    return res;
}

int main()
{
    char* a = "gihoewnr";
    char* b = "jrjef";
    char* x = concat (a , b);
    for (int i=0 ; *(x+i) != '\0' ; ++i){
        cout << *(x+i);
    }
}
