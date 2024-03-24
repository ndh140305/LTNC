#include <bits/stdc++.h>
using namespace std;

char out[] = "abcd";
int main(){
    // char in[4] = "abcd";
    char in[5] = "abcd";
    for (char i: in){
        cout << i << " ";
    }
    cout << in;
    cout << endl << "Size: " << sizeof(in)/sizeof(char);
}
