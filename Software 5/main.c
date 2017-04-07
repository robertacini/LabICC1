#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()
{


    int int1, int2, int3; //ler os tres inteiros
    while(1)
    {
        printf("Digite os tres numeros inteiros \n"); //aparece para o usuario o q fazer

        scanf("%d", &int1); // lê o 1 inteiro

        scanf("%d", &int2); // lê o 2 inteiro

        scanf("%d", &int3); // lê o 3 inteiro



        if(int1 >= int2)  //verifica qual maior
        {

            if(int2 >= int3)  // verifica novamente
            {

                printf("%d , %d , %d", int3, int2, int1); // printa uma das opções
                sleep(5);
                system("cls");
            }


            else if(int3 >= int1)
            {

                printf("%d , %d , %d", int2, int1, int3); // printa uma das opções
                sleep(5);
                system("cls");
            }


            else
            {

                printf("%d , %d , %d", int2, int3, int1); // printa uma das opções
                sleep(5);
                system("cls");
            }

        }


        else
        {

            if(int1 >= int3)  // verifica novamente
            {

                printf("%d , %d , %d", int3, int1, int2); // printa uma das opções
                sleep(5);
                system("cls");
            }


            else if(int3 >= int2)
            {

                printf("%d , %d , %d", int1, int2, int3); // printa uma das opções
                sleep(5);
                system("cls");
            }


            else
            {

                printf("%d , %d , %d", int1, int3, int2); // printa uma das opções
                sleep(5);
                system("cls");
            }

        }
    }


}
