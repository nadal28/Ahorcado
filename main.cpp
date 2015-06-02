#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){

	char palabra[20];
	char letra;
	int vidas = 5;
	int correcto;
	int nAciertos;
	system("clear");
	system("toilet -Fmetal Ahorcado by nadal28");

	printf("\n\nIntroduce la palabra a adivinar: ");
	scanf(" %s", palabra);

	char acierto[strlen(palabra)];
	for(int i=0; i< strlen(palabra);i++)
		printf(" _ ");

	while(vidas>0 && (nAciertos != (strlen(acierto)))){	
		system("clear");
		system("toilet -Fmetal Ahorcado by nadal28");
		printf("\nVidas:  %i\n", vidas);		
		printf("Introduce una letra: ");
		scanf(" %c", &letra);
		correcto = 0;
		for(int j=0; j<strlen(palabra); j++){

			if(letra == acierto[j]){
				printf("Otra vez? Pues te quito una vida cabron\n");
				vidas--;		
			}else if(letra == palabra[j]){
				acierto[j] = letra;
				printf("Correcto\n");
				correcto++;
			}else if(correcto == 0 && j == (strlen(palabra)-1)){
				vidas--;
				printf("Fallaste!\n");

				correcto++;
			}		
		}
		for(int a=0; a<strlen(palabra);a++){
			if(acierto[a] == ' ')
				printf(" _ ");
			else{
				printf(" %c ",acierto[a]);
				nAciertos++;
}

		}
	}

	printf("Has ganado, la palabra era %s", palabra);
return 0;

}
