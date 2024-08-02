#include <stdio.h>

int max_num(int int_arr[], int lenth){
    int max = int_arr[0];
    for(int i=1;i<lenth;i++)
        if(max<int_arr[i]){
            max = int_arr[i];
        }
    return max;
}
void max_num_advenced(int int_arr[], int lenth, int *index, int *max){
    *max = int_arr[1];
    *index = 1;
    for(int i=1;i<lenth;i++)
        if(*max<int_arr[i]){
            *max = int_arr[i];
            *index = i;
        }
}
int bribe(int votes[], int lenth){
    int index,max,bribed_man=0;
    while(1){
        max_num_advenced(votes, lenth, &index, &max);
        if(votes[0] > max)
            break;
        votes[0]++;
        votes[index]--;
        bribed_man++;
    }
    return bribed_man;
}
int main()
{
    int rpt,max;
    int vote[100];
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++)
        scanf("%d",&vote[i]);
    max = max_num(vote, rpt);
    if(vote[0] > max || rpt == 1)
        puts("0");
    else
        printf("%d\n",bribe(vote, rpt));
    return 0;
}