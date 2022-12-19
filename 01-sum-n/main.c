#include <stdio.h>
int main (void){
    int N,i,sum = 0 ;
    printf("input N ");
    scanf("%d",&N);
    i = 0;
    while (i<=N){
        sum += i;
        i++;
    }
    printf("the sum is %d\n" ,sum);
}