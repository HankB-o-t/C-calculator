#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int result;
    printf("Ingrese un primer valor \n");
    scanf("%d",&num1);
    printf("Ingrese un segundo valor \n");
    scanf("%d",&num2);
    result = num1 + num2;
    printf("El resultado es: %d \n", result);
    return 0;
}