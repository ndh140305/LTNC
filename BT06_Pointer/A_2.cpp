#include <iostream>
using namespace std;

void f(int* arr, int size) {
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << size << endl;
}

int main() {
    int A[10];
    cout << sizeof(A) << endl;
    cout << sizeof(A[0]) << endl;
    cout << sizeof(A) / sizeof(A[0]) << endl;
    f(A, sizeof(A) / sizeof(A[0]));
    return 0;
}
