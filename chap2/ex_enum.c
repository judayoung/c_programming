#include <stdio.h>

int main(){
    enum day {SUN, MON, TUE, WED, THR, FRI, SAT};
    enum day d1, d2;

    d1 = SUN;
    d2 = MON;

    printf("d1의 정수값 = %d\n", d1);
    printf("d2의 정수값 = %d\n", d2);

    return 0;
}