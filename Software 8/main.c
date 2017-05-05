#include <stdio.h>

#include <stdlib.h>


int main()

{

    int i, j;

    float c;

    float matriz[2][2];

    float inversa[2][2];

    float adjunta[2][2];

    float cofatores[2][2];

    float det;

    printf("Digite a11, a12, a21, a22, respectivamente \n");

    for(i=0; i<2; i++)

    {

        for(j=0; j<2; j++)

        {

            scanf("%f", &matriz[i][j]);

        }

    }

    det = (matriz[0][0]*matriz[1][1]) - (matriz[0][1]*matriz[1][0]);

    c = 1/det;

    if (det != 0)

    {


        cofatores[0][0] =  matriz[1][1];

        cofatores[0][1] = -matriz[1][0];

        cofatores[1][0] = -matriz[0][1];

        cofatores[1][1] =  matriz[0][0];

        for(i=0; i<2; i++)

        {

            for(j=0; j<2; j++)

            {

                adjunta[i][j] = cofatores[j][i];

            }

        }

        inversa[0][0] =    c * adjunta[0][0];

        inversa[0][1] =    c * adjunta[0][1];

        inversa[1][0] =    c * adjunta[1][0];

        inversa[1][1] =    c * adjunta[1][1];

        for(i=0; i<2; i++)

        {

            for(j=0; j<2; j++)

            {


                printf("%.2f ", inversa[i][j]);



            }

            printf("\n");

        }



    }

    else


        printf("Nao existe matriz inversa\n");

    return 0;

}











