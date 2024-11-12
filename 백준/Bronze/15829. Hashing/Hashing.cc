#include <iostream>
#include <cmath>
#define R 31
#define M 1234567891
using namespace std;
int hasher(int len, const char* str) {
    long long sum = 0;
    for (int i = 0; i < len; i++) {
        sum += (str[i] - 96) * (double)pow(R, i);
    }
    return (sum % M);
}
int main(){
    int len,result;
    char str[55];
    cin >> len >> str;
    result = hasher(len, str);
    cout << result << endl;
    return 0;
}