#include <stdio.h>
//====================================================
typedef struct _Stack {
    int nums[100000];
    int len;
}stack;

void stack_init(stack *i_stack) {
    i_stack->len=0;
}
void stack_input(stack *Stack,int data) {
    Stack->nums[Stack->len] = data;
    Stack->len++;
}
void stack_del(stack *Stack) {
    Stack->len--;
}
int stack_sum(stack *Stack) {
    int sum=0;
    for(int i=0;i<Stack->len;i++)
        sum += Stack->nums[i];
    return sum;
}
//====================================================
int main(void) {
    int rpt,ipt,sum=0;
    stack ledger;
    stack_init(&ledger);
    scanf("%d",&rpt);
    for(int i=0;i<rpt;i++) {
        scanf("%d",&ipt);
        if(ipt)
            stack_input(&ledger, ipt);
        else
            stack_del(&ledger);
    }
    printf("%d\n",stack_sum(&ledger));

}