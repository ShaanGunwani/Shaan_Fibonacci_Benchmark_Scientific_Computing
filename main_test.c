#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    printf("The Fibonacci Number for %d is %d (iterative)\n", N, fibonacciIterative(N));
    printf("The Fibonacci Number for %d is %d (recursive)\n", N, fibonacciRecursive(N));

    for (int i = 0; i <= N; i++){
        if (fibonacciIterative(i) != fibonacciRecursive(i)){
            printf("Error at %i\n",i);
        }
        else{
            printf("The Fibonacci Number F%d = %d = %d\n", i, fibonacciIterative(i), fibonacciRecursive(i));
        }
    }
    return 0;
}
