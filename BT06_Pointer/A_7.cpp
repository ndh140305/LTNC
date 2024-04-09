#include <bits/stdc++.h>
using namespace std;


int count_occurrences(char* str1, char* str2) {
    int count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i <= len2 - len1; i++) {
        if (strncmp(str1, str2 + i, len1) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[] = "aaaaaaaaaaaaaa";
    char str2[] = "aaaaaaaaaaaaaaaaaa";
    cout << count_occurrences(str1 , str2);
    return 0;
}
