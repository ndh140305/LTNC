#include <bits/stdc++.h>
using namespace std;

char* reverse(const char a[])
{
    int len = strlen(a);
    char* res = new char[len+1];
    int id = 0;
    int i=0;
    for (; *(a+i) != 0 ; ++i){};
    i--;
    for (; i>=0 ; --i){
        *(res+id) = *(a+i);
        id++;
    }
    res[id] = '\0';
    return res;
}

char* delete_char(const char a[], const char c)
{
    char* res = new char;
    int id = 0;
    for (int i=0 ; *(a+i) != '\0' ; ++i){
        if (*(a+i) != c){
            *(res + id) = *(a+i);
            id++;
        }
    }
    return res;
}

char* pad_right(const char a[], int n)
{
    int len = strlen(a);
    int id = 0;
    char* res = new char [len + n +1];
    for (int i=0 ; i<len ; ++i){
        *(res + id) = *(a+i);
        id++;
    }
    for (int i=0 ; i<(n-len) ; ++i){
        *(res+id) = '_';
        id++;
    }
    *(res+id) = '\0';
    return res;

}

char* pad_left(const char a[], int n)
{
    int len = strlen(a);
    int id = 0;
    char* res = new char [len + n +1];
    for (int i=0 ; i<(n-len) ; ++i){
        *(res+id) = '_';
        id++;
    }
    for (int i=0 ; i<len ; ++i){
        *(res + id) = *(a+i);
        id++;
    }
    *(res+id) = '\0';
    return res;

}

char* truncate(const char a[], int n)
{
    int len = strlen(a);
    int id = 0;
    char* res = new char [n+1];
    for (int i=0 ; i<n && *(a+i) != '\0'; ++i){
        *(res+id) = *(a+i);
        id++;
    }
    *(res+id) = '\0';
    return res;
}

char* trim_left(const char a[]){
    int len = strlen(a);
    int id = 0;
    int i=0;
    char* res = new char [len+1];
    for (; i<len && *(a+i) == ' '; ++i){};
    for (; i!='\0' ; ++i){
        *(res+id) = *(a+i);
        id++;
    }

    *(res+id) = '\0';
    return res;
}

char* trim_right(const char a[])
{
    int len = strlen(a);
    int id = 0;
    int i=len-1;
    char* res = new char [len+1];
    for (; i>0 && *(a+i) == ' '; --i){};
    for (int j=0 ; j<=i ; ++j){
        *(res+id) = *(a+j);
        id++;
    }

    *(res+id) = '\0';
    return res;
}
int main()
{
    char a[10] = "frjdewdf";
    char b[20] = "     jnfjene       ";
    cout << reverse(a) << endl;
    cout << delete_char(a , 'f') << endl;
    cout << pad_right(a , 10) << endl;
    cout << pad_left (a , 10) << endl;
    cout << truncate(a , 2) << endl;
    cout << trim_left(b) << endl;
    cout << trim_right(b) << endl;
}
