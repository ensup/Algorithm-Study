//LOL ^O^
#include <stdio.h>

int main()
{
    char school;
    scanf("%c",&school);
    if(school == 'N')
        puts("North London Collegiate School");
    else if(school == 'B')
        puts("Branksome Hall Asia");
    else if(school == 'K')
        puts("Korea International School");
    else
        puts("St. Johnsbury Academy");

    return 0;
}