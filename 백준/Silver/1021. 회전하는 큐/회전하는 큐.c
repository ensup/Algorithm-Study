//https://www.acmicpc.net/problem/1021
#include <stdio.h>
#include <stdlib.h>
typedef struct Llist_node
{
    struct Llist_node *front;
    int data;
    struct Llist_node *next;
}node;
typedef struct moving_q
{
    int mv_count,count;
    node *rear;
}mvq;
void init_mvq(mvq *target){
    target->rear=0;
    target->mv_count=0;
    target->count=0;
}
void mknode(mvq *tg,int data){
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    if(tg->rear==NULL){
        new_node->next=new_node;
        new_node->front=new_node;
    }
    else
    {
        new_node->next=tg->rear->next;
        new_node->front=tg->rear;
        tg->rear->next->front=new_node;
        tg->rear->next=new_node;
    }
    tg->rear=new_node;
    tg->count++;
}
void mv2rear(mvq *target){
    target->rear=target->rear->next;
    target->mv_count++; //이동한 횟수 기록
}
void mv2front(mvq *target){
    target->rear=target->rear->front;
    target->mv_count++; //이동한 횟수 기록
}
void set_mvq(mvq *target,int num){
    for(int i=1;i<=num;i++)
        mknode(target,i);
}
int peek(mvq *target){
    return target->rear->next->data;
}
void rm_q(mvq *target){
    node *tmp=target->rear->next;
    target->rear->next->next->front=target->rear;
    target->rear->next=target->rear->next->next;
    free(tmp);
    target->count--;
}
int ifinder(mvq *t,int key){
    node *cur=t->rear->next;
    for(int i=0;i<t->count;i++){
        if(cur->data==key)
            return i;
        else
        {
            cur=cur->next;
        }

    }
}
int main(){
    int size,num,*target_num;
    mvq moving;
    scanf("%d%d",&size,&num);
    init_mvq(&moving);
    set_mvq(&moving,size);
    target_num=(int*)calloc(num,sizeof(int));
    for(int i=0;i<num;i++)
        scanf("%d",&target_num[i]);
    for(int i=0;i<num;i++){
        int far=ifinder(&moving,target_num[i]);
        if(far<=moving.count/2){
            while (1)
            {
                if(target_num[i]==peek(&moving)){
                    rm_q(&moving);
                    break;
                }
                mv2rear(&moving);
            }
        }
        else{
            while (1)
            {
                if(target_num[i]==peek(&moving)){
                    rm_q(&moving);
                    break;
                }
                mv2front(&moving);
            }
        }
    }
    printf("%d\n",moving.mv_count);
    free(target_num);
    return 0;
}
