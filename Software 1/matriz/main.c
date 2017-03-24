#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a11, a12, a21, a22;
    float det;
printf("Digite a11 \n");
    scanf("%f", &a11);
   printf("Digite a12 \n");
    scanf("%f", &a12);
    printf("Digite a21 \n");
    scanf("%f", &a21);
    printf("Digite a22 \n");
    scanf("%f", &a22);
    printf("Pronto \n");
    printf("%f", det = a11*a22 - a21*a12);

    return 0;
}
