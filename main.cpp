#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){

    char palabra[20];
    char letra;
    int vidas = 5;
    int correcto;

    bool repite;
    system("clear");
    system("toilet -Fmetal Ahorcado by nadal28");

    printf("\n\nIntroduce la palabra a adivinar: ");
    scanf(" %s", palabra);

    char acierto[strlen(palabra)];
    for(int i=0; i< strlen(palabra);i++)
	printf(" _ ");

    while(vidas>0 ){	
	system("clear");
	system("toilet -Fmetal Ahorcado by nadal28");
	printf("\nVidas:  %i\n", vidas);		
	printf("Introduce una letra: ");

	scanf(" %c", &letra);
	correcto = 0;
	repite = false;
	for(int j=0; j<strlen(palabra); j++){

	    if(letra == acierto[j]){
		printf("Otra vez? Pues te quito una vida cabron\n");
		vidas--;
		repite = true;		
	    }else if(letra == palabra[j]){
		acierto[j] = letra;

		correcto++;
	    }else if(correcto == 0 && j == (strlen(palabra)-1) && repite == false){
		vidas--;


		correcto++;
	    }		
	}
	for(int a=0; a<strlen(palabra);a++){
	    if(acierto[a] == ' '){
		printf("_");
	    } else{
		printf(" %c ",acierto[a]);
	   }

	}
	if((strcmp(acierto,palabra)) == 0){
	    printf("\nHas ganado\n");
	    return 0;
	}


    }

    printf("Has perdido, la palabra era %s", palabra);
    return 0;

}
