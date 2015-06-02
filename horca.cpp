#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palabra[20];
char aciertos[100];
char fallos[100];
int intentos = 3;
int nAciertos = 0;
int nFallos = 0;
int tamano = 0;

void registrarAcierto (char letra) {
    aciertos[nAciertos] = letra;
    nAciertos++;
    if(nAciertos == tamano) {
	printf("\n Enhorabuena, la palabra era: %s \n", palabra);
	system("pause");
	exit(0);
    }
}

void registrarFallo (char letra) {
    fallos[nFallos] = letra;
    nFallos++;
    intentos--;
    printf("\nMAL!, te quedan %i intentos", intentos);
    if(intentos == 0)
	printf("\n Has palmado, la palabra era %s \n", palabra);
}

bool aciertoAnterior (char letra) {
    for(int i = 0; i < nAciertos; i++) {
	if(aciertos[i] == letra)
	    return true;
    }
    return false;
}

void desplegarTablero (char letra) {
    bool acierto = true;

    for(int i = 0 ; i < tamano ; i++){
	if(palabra[i] == letra){
	    registrarAcierto(letra);
	    printf(" %c ", letra);


	}else if(aciertoAnterior(palabra[i])){
	    printf(" %c ", palabra[i]);
	    acierto = false;
	}else{
	    printf(" _ ");
	    acierto = false;
	}

    }
    if(!acierto) {
	registrarFallo(letra);
    }
}


int main(){
    char letra;
    printf("Introduce la palabra a adivinar: ");
    scanf("%s", palabra);
    fflush(stdin);
    system("clear");
    tamano = strlen(palabra);
    while(intentos > 0){
	printf("\nIntroduce una letra: ");
	scanf("%c", &letra);
	fflush(stdin);
	desplegarTablero(letra);
    }
    system("pause");
}
