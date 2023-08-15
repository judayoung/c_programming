#include <stdio.h>
int a = 100;

void func(){
    int a = 200;
    printf("func 에서의 a = %d\n", a);
}

int main(){
    printf("main 에서의 a = %d\n", a);
    func();

    return 0;
}