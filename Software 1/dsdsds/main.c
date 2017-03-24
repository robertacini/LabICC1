#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int seg = 0;

    while(seg < 10) {

        printf("%d", seg);

        sleep(1);
        seg = seg + 1;
    }

    return 0;
}
