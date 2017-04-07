#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    float hc, hd;
    int n =0;
    hc = 1.52;
    hd = 1.10;
   for (n = 0; hc >= hd ; n = n+1)
    {
        hc = hc+0.02;
        hd = hd+0.03;
    }
    printf("O tempo decorrido foi %d anos \n", n );
}
