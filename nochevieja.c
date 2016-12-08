#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hora,minutos,total;
	printf("Que hora es?:");
	scanf("%d",&hora);
	printf("cuantos minutos:");
	scanf("%d",&minutos);
	total=hora*60;
	total=total+minutos;
	total=1440-total;
	if(total==0){
		printf("Hora de comer uvas, es media noche");
	}else{
		printf("Faltan %d minutos para la media noche",total);
	}
	
	return 0;
}
