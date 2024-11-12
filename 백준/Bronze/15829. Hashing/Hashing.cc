#include <iostream>
#include <cmath>
#define R 31
#define M 1234567891
using namespace std;
long long hasher(int len, const char* str) {
    long long sum = 0;
    long long r_power = 1;
    for (int i = 0; i < len; i++) {
        sum += ((str[i] - 96) * (r_power%M));
        sum %= M;
        r_power = (r_power * R)%M;
    }
    return (sum % M);
}
int main(){
    int len;
    long long result;
    char str[55];
    cin >> len >> str;
    result = hasher(len, str);
    cout << result << endl;
    return 0;
}