#include <stdio.h>
int product(int num1, int num2);

int main(){
    int num1, num2, result;
    printf("Enter a number between 1 and 100 : ");
    scanf("%d", &num1);

    printf("Enter another number between 1 and 100 : ");
    scanf("%d", &num2);

    result = product(num1, num2);
    printf("%d * %d = %d\n", num1, num2, result);

    return 0;
}

int product(int num1, int num2){
    int result;
    result = num1 * num2;
    return result;
}