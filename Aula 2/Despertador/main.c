#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void)
{
	int segundos = 0, minutos = 0, horas = 0;
    int Ahora , Aminuto , Aseg;
    printf("Digite a hora para despertar \n");
    scanf("%d", &Ahora);
    printf("Digite o minuto para despertar \n");
    scanf("%d", &Aminuto);
    printf("Digite o segundo para despertar \n");
    scanf("%d", &Aseg);

		while (1) {

            sleep (1);
			segundos = segundos + 1;
			system("cls");

			if (segundos > 59) {
				minutos = minutos + 1;
				segundos = 0;
			}
			if (minutos > 59) {
				horas = horas + 1;
				minutos = 0;
			}
			if (horas > 23) {
				horas = 0;
			}
			printf("%d: %d: %d", horas, minutos, segundos);

			if(Ahora == horas && Aminuto == minutos && Aseg == segundos) {
                printf("\n \n \n \nAcoooooordaaaaaaa Viaaaaadooooooo ");
                break;
			}

		}

	return 0;
}
