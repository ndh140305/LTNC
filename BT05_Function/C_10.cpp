#include <bits/stdc++.h>
using namespace std;

void sum_of_three(int arr[] , int n){
    for (int i=0 ; i<(n-2) ; ++i){
        for (int j=i+1 ; j<(n-1) ; ++j){
            for (int k=j+1 ; k<n ; ++k){
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0){
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                    cout << endl;
                }
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int nums[n];
    for (int i=0 ; i<n ; ++i){
        nums[i] = rand() % 50;
    }
    sum_of_three (nums , n);
}
