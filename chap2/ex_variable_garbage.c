#include <stdio.h>

int main(){
    int i, sum;
    // printf("sum = %d\n", sum); // [warning] 'sum' is used uninitialized

    for(i = 0; i < 10; i++){
        sum += i;
    }

    printf("sum = %d\n", sum);

    return 0;
}