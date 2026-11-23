#include <iostream>

using namespace std;

int main(){
    int day, tmp, money=0;
    cin >> day;
    for(int i=0;i<5;i++){
        cin >> tmp;
        if (tmp == day)
            money++;
    }
    printf("%d\n",money);

    return 0;
}