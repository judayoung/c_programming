#include <stdio.h>
#include <limits.h>

int main(){
    char ch1 = CHAR_MIN;
    char ch2 = CHAR_MAX;

    short sh1 = SHRT_MIN;
    short sh2 = SHRT_MAX;

    int int1 = INT_MIN;
    int int2 = INT_MAX;

    long long llong1 = LLONG_MIN;
    long long llong2 = LLONG_MAX;

    printf("char 자료형 범위 : %d ~ %d\n", ch1, ch2);
    printf("short 자료형 범위 : %d ~ %d\n", sh1, sh2);
    printf("int 자료형 범위 : %d ~ %d\n", int1, int2);
    printf("long long 자료형 범위 : %lld ~ %lld\n", llong1, llong2);

    ch1 = 0;
    ch2 = '0';
    char ch3 = 'A';
    printf("ch1의 ASCII 코드 값 = %d, ASCII 문자 = %c\n", ch1, ch1);
    printf("ch2의 ASCII 코드 값 = %d, ASCII 문자 = %c\n", ch2, ch2);
    printf("ch3의 ASCII 코드 값 = %d, ASCII 문자 = %c\n", ch3, ch3);

    int1 = 012;
    int2 = 0xFF;
    printf("int1에 저장된 정수값 = %d\n", int1);
    printf("int2에 저장된 정수값 = %d\n", int2);

    char* string = "문자열형";
    printf("string = %s\n", string);
    char string2[100] = "문자열형2";
    printf("string2 = %s\n", string2);

    return 0;
}