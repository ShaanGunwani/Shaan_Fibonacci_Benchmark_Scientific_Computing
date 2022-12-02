#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
    const int N=10;
    float start = (float)clock()/CLOCKS_PER_SEC;

    for (unsigned int i = 0; i<N; i++){
        fibonacciRecursive(i);
    }

    float end = (float)clock()/CLOCKS_PER_SEC;
    double Time = end - start;

    printf("The benchmark time taken on the iterative approach with N = %d : %f\n", N, Time);

    return 0;
}
