#include <stdio.h>

#define COMPILE_CONDITION 0

int main(){
    #if COMPILE_CONDITION
        printf("이 부분을 컴파일.\n");
    #else
        printf("저 부분을 컴파일.\n");
    #endif

    return 0;
}