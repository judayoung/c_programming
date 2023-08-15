#include <stdio.h>
#include <limits.h>

int main(){
    // printf("test\n", 1023);
    // printf("test%d\n");

    printf("%%d : %d\n", 123456789);
    printf("%%lld : %lld\n", LLONG_MAX);
    printf("%%o : %o\n", 123456789);
    printf("%%x : %x\n", 123456789);

    printf("%%f : %f\n", 1234.56789);
    printf("%%lf : %lf\n", 1234.56789);

    printf("%%e : %e\n", 1234.56789);

    printf("%%c : %c\n", 65);
    printf("%%s : %s\n", "string");
    char* string = "char pointer";
    printf("%%p : %p\n", string);

    return 0;
}