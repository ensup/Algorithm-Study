#include <stdio.h>

int main() {
    char dong;
    scanf("%c",&dong);
    switch (dong) {
        case 'M':
            puts("MatKor");
            break;
        case 'W':
            puts("WiCys");
            break;
        case 'C':
            puts("CyKor");
            break;
        case 'A':
            puts("AlKor");
            break;
        default:
            puts("$clear");
    }
}