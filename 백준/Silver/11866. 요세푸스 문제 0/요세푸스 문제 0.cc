#include <iostream>
using namespace std;
class joseph {
    bool man[1001] = { 0 };
    int target[1001] = { 0 };
    
public:
    int n,k,cur,cnt;

    void rm() {
        target[cnt] = cur;
        man[cur] = 1;
        cnt++;
    }
    void mv() {
        for (int i = 0; i < k;i++) {
            if (cur + 1 > n) {
                cur = 0;
            }
            cur++;
            if (man[cur]) {
                i--;
                continue;
            }

        }
    }
    void print_res() {
        cout << '<' << target[0];
        for (int i = 1; i < n; i++)
            cout << ", " << target[i];
        cout << '>' << endl;
    }
};

int main(){
    joseph js;
    
    cin >> js.n >> js.k;
    js.cur = js.k;
    js.cnt = 0;
    while (js.cnt<js.n-1) {
        js.rm();
        js.mv();
    }
    js.rm();
    js.print_res();
    return 0;
}
