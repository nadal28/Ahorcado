#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

char palabra[N];
int tamano;
int vidas = 5;
char letra;
char aciertos[N];
int nAciertos;

void registrarAcierto(char){
    letra = aciertos[nAciertos];
    nAciertos++;
    if(nAciertos == tamano)
	printf("Has ganado, la palabra era: ", palabra);

}

void desplegarTablero(char){
    tamano = strlen(palabra);
    while(vidas > 0){
	printf("Introduce una letra: ");
	gets(letra);
	for(int i=0; i < tamano; i++)
	    if(palabra[i] == letra)
		registrarAcierto(letra);	
	    else


    }

}

int main(){
    system("clear");
    system("toilet -Fmetal Ahorcado");

    printf("Escribe una palabra: ");
    gets(palabra);

    desplegarTablero(palabra);



}
