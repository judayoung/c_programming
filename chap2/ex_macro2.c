#include <stdio.h>

#define IN "원의 반지름은 100입니다."
#define PI 3.141592
#define AREA(r) (r*r*PI)
#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다.\n")

int main(){
    printf("%s\n", IN);
    printf("원의 면적 = %10.5f\n", AREA(100));
    OUT;

    return 0;
}