#include <stdio.h>
#include <stdlib.h> 
#define N 6

int main() { 
    system("chcp 65001");

    float array_A[N][N]= { 
    -1.27, 5.85, 4.35, -7.5, 12.7, 5.63,
    3.4, -7.3, 6.83, 8.4, -8.1, 1.4,
    5.9, 10.12, 9.1, 8.4, 3.14, -11.8,
    4.2, -7.6, 15.76, -3.1, 6.1, 14.5,
    5.9, 3.3, 6.9, 0.15, -1.6, -8.29, 
    1.7, 3.22, 9.8, 6.4, 5.01, 12.1 };

    int i, j;
    float max;
    
    for(j=0; j<N; j+=1){
        max = array_A[0][j];
        for(i=0; i<N; i+=1){
            if(max < array_A[i][j]){
                max = array_A[i][j];
            }
        }
        printf("Найбільший елемент у %d стовпці = %.2f\n", j+1, max);
    }
    
    return 0;
}