#include <stdio.h>
#pragma warning(disable:4996) // visual studio에서 scanf 를 권장하지 않아서 생기는 에러를 무시한다.

int main(){
    int a; long long b;
    printf("정수와 long long 정수를 입력 : ");
    scanf("%d %lld", &a, &b);
    printf("a = %d, b = %lld\n", a, b);

    float c = 2.33333333; double d = 54.121212121212;
    printf("c = %20.10f, d = %50.20lf\n", c, d);

    char ch; char string[100];
    printf("문자 하나를 입력 : ");
    scanf(" %c", &ch); // 앞에 scanf()를 입력할 때 누른 Enter를 무시하기 위해 %c 앞에 공백을 넣어야 함.
    printf("ch = %c\n", ch);
    printf("문자열을 입력 : ");
    scanf("%s", string);
    printf("string = %s\n", string);
}