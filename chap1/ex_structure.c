#include <stdio.h>
int add(int a, int b);

int main(){
    int i, j, sum;

    printf("call add function.\n");
    i=10, j=20;
    sum=add(i,j);
    printf("sum=%d\n",sum);

    return 0;
}

int add(int a, int b){
    int sum;
    sum = a+b;
    return sum;
}