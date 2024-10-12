#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int num;
    char mon[21];
}mons;
typedef struct linkedList{
    mons *data;
    struct linkedList *next;
}List;
typedef struct Hash_Table{
    List *front;
    List *cur;
    int len;
}table;
int hasher(char *tg){
    int len,sum=0;
    len = strlen(tg);
    for(int i=0;i<len;i++)
        sum += tg[i];
    return sum%127;
}
int ifinder(char *str,table *hstable){
    int hs;
    hs = hasher(str);
    hstable[hs].cur=hstable[hs].front;
    for(int i=0;i<hstable[hs].len;i++){
        if(strcmp(str,hstable[hs].cur->data->mon)==0)
            return hstable[hs].cur->data->num;
        else
            hstable[hs].cur=hstable[hs].cur->next;
    }
    return -1;
}
int main(void){
    int rpt,tester;
    mons *list;
    table hash_table[127]={0};
    char ipt_str[21];
    scanf("%d%d",&rpt,&tester);
    list = calloc(rpt,sizeof(mons));
    for(int i=0;i<rpt;i++) {
        int hs;
        scanf("%s",&list[i].mon);
        list[i].num=i+1;
        hs = hasher(list[i].mon);
        List *tmp;
        tmp = malloc(sizeof(List));
        tmp->data=&list[i];
        tmp->next=NULL;
        if(hash_table[hs].len){
            hash_table[hs].cur->next=tmp;
        }
        else{
            hash_table[hs].front=tmp;
        }
        hash_table[hs].cur=tmp;
        hash_table[hs].len++;
    }
    for(int i=0;i<tester;i++) {
        scanf("%s",ipt_str);
        if(ipt_str[0]>='0' && ipt_str[0]<='9'){
            int num;
            num = atoi(ipt_str);
            printf("%s\n",list[num-1].mon);
        }
        else{
            int target;
            target = ifinder(ipt_str,hash_table);
            printf("%d\n",target);
        }
    }
    free(list);
}