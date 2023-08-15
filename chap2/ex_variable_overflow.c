#include <stdio.h>

int main(){
    short overflow = 0x7FFF;
    short underflow = -(0x7FFF)-1;
    printf("short 최대값 = %d\n", overflow);
    printf("short 최소값 = %d\n", underflow);

    overflow += 1;
    underflow -= 1;
    printf("short overflow = %d\n", overflow);
    printf("short underflow = %d\n", underflow);

    return 0;
}