#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int arr[100];
    for (int i=0 ; i<100 ; ++i){
        *(arr+i)=i;
    }
    int left = 0;
    int right = 100-1;

    while (left<=right){
        int mid = left + (right - left)/2;

        if (*(arr+mid)==x){
            cout << mid;
            return 0;
        }
        else if (x>*(arr+mid)){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
}
