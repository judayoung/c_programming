#include <stdio.h>

int main(){
    printf("|%d|\n", 123);
    printf("|%5d|\n", 123);
    printf("|%-5d|\n", 123);
    printf("|%05d|\n", 123);

    printf("|%6.1f|\n", 123.456789);
    printf("|%06.1f|\n", 123.43);

    return 0;
}