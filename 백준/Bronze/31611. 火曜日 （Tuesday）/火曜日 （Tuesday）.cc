#include <iostream>
using namespace std;


int main(){
    int date;
    cin >> date;
    if (date % 7 == 2)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}