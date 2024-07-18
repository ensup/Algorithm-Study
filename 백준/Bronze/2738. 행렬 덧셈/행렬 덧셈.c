#include <stdio.h>

void get_matrix(int matrix_input[][100], int N, int M) {
    for(int n=0;n<N;n++) {
        for(int m=0;m<M;m++)
            scanf("%d",&matrix_input[n][m]);
    }
}
void matrix_sum(int first_matrix[][100], int second_matrix[][100], int result_mx[][100], int N, int M) {
    for(int n=0;n<N;n++) {
        for(int m=0;m<M;m++)
            result_mx[n][m] = first_matrix[n][m] + second_matrix[n][m];
    }
}
void print_matrix(int matrix_output[][100], int N, int M) {
    for(int n=0;n<N;n++) {
        for(int m=0;m<M;m++)
            printf("%d ",matrix_output[n][m]);
        puts("");
    }
}
int main(){
    int N,M;
    int first_matrix[100][100];
    int second_matrix[100][100];
    int last_matrix[100][100];
    scanf("%d%d",&N,&M);
    get_matrix(first_matrix,N,M);
    get_matrix(second_matrix,N,M);
    matrix_sum(first_matrix,second_matrix,last_matrix,N,M);
    print_matrix(last_matrix,N,M);
}