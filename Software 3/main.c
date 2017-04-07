#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void main()
{
    float a, b, c ;
    while(1)
    {
        printf("Digite os valores dos lados do triangulo \n");
        scanf("%f", &a);
        printf("Digite os valores dos lados do triangulo \n");
        scanf("%f", &b);
        printf("Digite os valores dos lados do triangulo \n");
        scanf("%f", &c);
        if((a<0) || (b<0) || (c<0))
        {
            printf("Nao existe medida negativa \n");
            sleep(5);
            system("cls");

        }
        else
        {
            if (a == b && b == c && a == c)
            {
                printf("o triangulo e equilatero \n");
                sleep(5);
                system("cls");

            }
        }
        if (a != b && b != c && a != c)
        {
            printf("O triangulo e escaleno \n");
            sleep(5);
            system("cls");

        }
        if ((a == b && b != c && a != c) || (a != b && b == c && a != c) || (a != b && b != c && a == c))
        {
            printf("O triangulo e isoceles \n");
            sleep(5);
            system("cls");

        }
    }
}
