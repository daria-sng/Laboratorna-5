#include <stdio.h>
#include <stdlib.h> 
#define M 4
#define N 5

int main() { 
    system("chcp 65001");
    int array_A[M][N];
    int array_C[M]={0};
    int i, j;

    printf("Введіть 20 цілих елементів масиву А[4][5] для сформування нового масиву C:\n");
    for (i = 0; i<M; i+=1) {
        for (j = 0; j<N; j+=1) {
            scanf("%d", &array_A[i][j]);
        }
    }


    for(i=0; i<M; i+=1){
        for(j=0; j<N; j+=1){
            if(i>j){
                array_C[i]+=array_A[i][j];
            }
        }
    }

    puts("Сформований масив С:");
    for(i=0; i<M; i+=1){
        printf("%d\n", array_C[i]);
    }

    return 0;
}