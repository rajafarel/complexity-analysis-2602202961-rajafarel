#include <stdio.h>
void sumElementMatrix(int* matrix,int M,int N){
    int sum = 0;
    for(int m=0; m<M;m++){
        for(int n = 0; n<N; n++){
            sum += matrix[M*m+n];
        }
    }
    return sum;

}