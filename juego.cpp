#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palabra[30];
int tamano;
int vidas = 5;
char letra;

void desplegarTablero(){
    tamano = strlen(palabra);
    while(vidas > 0){
	printf("Introduce una letra: ");
	gets(letra);
	
	for(int i=0; i < tamano; i++)

    }

}

int main(){
    system("clear");
    system("toilet -Fmetal Ahorcado");

    printf("Escribe una palabra: ");
    gets(palabra);

    desplegarTablero();



}
