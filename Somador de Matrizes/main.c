#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[100][100],m2[100][100],msoma[100][100];
    int i,j,linha,coluna;
    do
    {
        printf("Digite o numero de linha e coluna das matrizes\n");
        scanf("%d%d", &linha, &coluna);
    }
    while(linha != coluna);

    printf("Digite os elementos da primeira matriz:\n");
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Digite os elementos da segunda matriz:\n");
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            msoma[i][j]=m1[i][j]+m2[i][j];
            ;
            printf("%d ", msoma[i][j]);
        }
        printf("\n");
    }



    return 0;



}
