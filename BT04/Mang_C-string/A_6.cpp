#include <bits/stdc++.h>
using namespace std;
int main(){
   int arr[30];
   for (int i=0 ; i<30 ; ++i){
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
   }
   for (int i=0 ; i<29 ; ++i){
    for (int j=i+1 ; j<30 ; ++j){
        if (arr[i]>arr[j]){
            swap (arr[i] , arr[j]);
        }
    }
   }
   cout << endl;
   for (int i=0 ; i<30 ; ++i){
        cout << arr[i] << " ";
   }
}

