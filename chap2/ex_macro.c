#include <stdio.h>

#define PI 3.141592
#define STR "test"
#undef STR
#define AREA(r)(r * r * PI)

int main(){
    printf("PI = %f\n", PI);

    int r; float area; double area2;
    printf("Enter circle radius : ");
    scanf("%d", &r);
    area = AREA(r);
    area2 = AREA(r);
    printf("AREA (float) = %f\n", area);
    printf("AREA (double) = %f\n", area2);

    return 0;
}