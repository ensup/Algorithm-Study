#include <stdio.h>

int main(void)
{
    char grade[3];
    scanf("%s",grade);
    switch(grade[0]){
        case 'A':
            switch(grade[1]){
                case '+':
                    puts("4.3");
                    break;
                case '0':
                    puts("4.0");
                    break;
                case '-':
                    puts("3.7");
                    break;
            }
            break;
        case 'B':
            switch(grade[1]){
                case '+':
                    puts("3.3");
                    break;
                case '0':
                    puts("3.0");
                    break;
                case '-':
                    puts("2.7");
                    break;
            }
            break;
        case 'C':
            switch(grade[1]){
                case '+':
                    puts("2.3");
                    break;
                case '0':
                    puts("2.0");
                    break;
                case '-':
                    puts("1.7");
                    break;
            }
            break;
        case 'D':
            switch(grade[1]){
                case '+':
                    puts("1.3");
                    break;
                case '0':
                    puts("1.0");
                    break;
                case '-':
                    puts("0.7");
                    break;
            }
            break;
        case 'F':
            puts("0.0");
    }

    return 0;
}