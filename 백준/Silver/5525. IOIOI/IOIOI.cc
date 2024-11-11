#include <iostream>
#define SIZE 1000000
using namespace std;
class IOI {
public:
    char str[SIZE];
    int ptn;
    int checker(int idx) {
        int key = 1;
        for (int i = 0; i < ptn*2; i++) {
            if (i % 2 && str[i+idx] != 'I')
                key = 0;
            if (!(i % 2) && str[i+idx] != 'O')
                key = 0;
        }
        return key;
    }
};

int main(){
    IOI ioi;
    int sz,count=0;
    cin >> ioi.ptn >> sz >> ioi.str;
    for (int i = 0; i < sz; i++) {
        if ((sz - i) >= ioi.ptn && ioi.str[i] == 'I' && ioi.checker(i + 1))
            count++;
    }
    cout << count << endl;
    return 0;
}
