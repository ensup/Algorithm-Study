#include <stdio.h>
#include <stdlib.h>
void i_sort(int *target,int len);
void p_sort(int *target,int len);
void insert(int *target,int value,int *len);
int pop(int *target,int *len);
void exchange(int *target,int t1,int t2);
int main(){
    int rpt,ipt,len=0,*hieap;
    scanf("%d",&rpt);
    hieap=(int*)calloc(rpt+1,sizeof(int));
    for(int i=0;i<rpt;i++){
        scanf("%d",&ipt);
        if(ipt)
            insert(hieap,ipt,&len);
        else
            printf("%d\n",pop(hieap,&len));
    }
    return 0;
}

void insert(int *target,int value,int *len){
    (*len)++;
    target[*len]=value;
    i_sort(target,*len);
}
int pop(int *target,int *len){
    int tmp;
    tmp=target[1];
    if(*len>1){
        target[1]=target[*len];
        target[*len]=0;
        (*len)--;
        p_sort(target,*len);
    }
    else
        target[1]=0;
    return tmp;
}
void exchange(int *target,int t1,int t2){
    int tmp=target[t1];
    target[t1]=target[t2];
    target[t2]=tmp;
}
void i_sort(int *target,int len){
    int cur=len;
    while(cur>1){
        if(target[cur]>target[cur/2]){
            exchange(target,cur,cur/2);
            cur /= 2;
        }
        else
            break;
    }
}
void p_sort(int *target, int len){
    int cur = 1, key;
    while (cur * 2 <= len) { // 왼쪽 자식이 있는 동안만 반복
        if (cur * 2 + 1 <= len) {  // 오른쪽 자식이 존재할 때
            key = target[cur * 2] > target[cur * 2 + 1] ? cur * 2 : cur * 2 + 1;
        } else {
            key = cur * 2;  // 오른쪽 자식이 없으면 왼쪽 자식만 사용
        }

        // 부모 노드가 더 작다면 교환
        if (target[cur] < target[key]) {
            exchange(target, cur, key);
            cur = key;  // 교환 후 자식 노드로 이동
        } else {
            break;  // 자식 노드가 더 크지 않다면 종료
        }
    }
}
