#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;


typedef struct Queue
{
    Node *front;
    Node *rear;
    int count; // 큐 안의 노드 개수
}Queue;

void initQueue(Queue *queue)
{
    queue->front = queue->rear = NULL;
    queue->count = 0;    // 큐 안의 노드 개수를 0으로 설정
}

int isEmpty(Queue *queue)
{
    return queue->count == 0;    // 큐안의 노드 개수가 0이면 빈 상태
}

void enqueue(Queue *queue, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node)); // newNode 생성
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(queue))    // 큐가 비어있을 때
    {
        queue->front = newNode;
    }
    else    // 비어있지 않을 때
    {
        queue->rear->next = newNode;    //맨 뒤의 다음을 newNode로 설정
    }
    queue->rear = newNode;    //맨 뒤를 newNode로 설정
    queue->count++;    //큐안의 노드 개수를 1 증가
}

int dequeue(Queue *queue)
{
    int data;
    Node *ptr;
    if (isEmpty(queue))    //큐가 비었을 때
        return -1;
    else{
    ptr = queue->front;    //맨 앞의 노드 ptr 설정
    data = ptr->data;    // return 할 데이터
    queue->front = ptr->next;    //맨 앞은 ptr의 다음 노드로 설정
    free(ptr);    // ptr 해제
    queue->count--;    //큐의 노드 개수를 1 감소

    return data;
    }
}

int main(void)
{
    int rpt;
    Queue queue;

    initQueue(&queue);//큐 초기화
    scanf("%d",&rpt);
    for (int i = 1; i <= rpt; i++)
    {
        char cmd[10];
        int data1;
        scanf("%s",&cmd);
        if(strcmp(cmd, "push") == 0) {
            scanf("%d", &data1);
            enqueue(&queue, data1);
        }
        if(strcmp(cmd, "pop") == 0) {
            printf("%d\n", dequeue(&queue));
        }
        if(strcmp(cmd, "empty") == 0) {
            if(isEmpty(&queue))
                printf("1\n");
            else
                printf("0\n");
        }
        if(strcmp(cmd, "front") == 0) {
            if(isEmpty(&queue))
                printf("-1\n");
            else
                printf("%d\n", queue.front->data);
        }
        if(strcmp(cmd, "back") == 0) {
            if(isEmpty(&queue))
                printf("-1\n");
            else
                printf("%d\n", queue.rear->data);
        }
        if(strcmp(cmd, "size") == 0) {
        printf("%d\n",queue.count);
        }

    }
    return 0;
}

