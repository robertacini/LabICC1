#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()

{

    int numero;

    while(1)
    {
        printf("Digite um numero \n");

        scanf("%d", &numero);

        if(numero%2 == 0)
        {

            printf("O numero e par\n");
            sleep(5);
            system("cls");
        }

        else

        {

            printf("o numero e impar \n");
            sleep(5);
            system("cls");
        }
    }
}
