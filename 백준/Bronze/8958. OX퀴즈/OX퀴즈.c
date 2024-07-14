#include <stdio.h>
#include <string.h>

int main() {
    int rpt;
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++) {
        char score[85];
        int len,streak=0,total_score=0;
        scanf("%s",score);
        len = strlen(score);
        for(int j=0;j<len;j++)
            if(score[j] == 'O') {
                total_score += ++streak;
            }
            else
                streak = 0;
        printf("%d\n",total_score);

    }
}