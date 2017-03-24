#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main (void)
{
	int segundos = 0, minutos = 0, horas = 0;

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

		}

	return 0;
}
