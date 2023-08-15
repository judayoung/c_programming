#include <stdio.h>

int main(){
    printf("문자 하나를 입력하세요 : ");
    char a = getchar();
    putchar(a);
    putchar(a+1);
    putchar('\n');
    getchar(); // 앞의 getchar()로 받을 때 누른 Enter를 무시하기 위해.

    printf("문자열을 입력하세요 : ");
    char string[100] = "";
    // gets(string); // `gets` function is dangerous and should not be used.
    // gets_s(string, size); // `gets_s` 지원안됨. 선택사항이라서.
    fgets(string, sizeof string, stdin);
    puts(string);

    return 0;
}