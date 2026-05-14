#include<stdio.h>
void main(){
	//usa a tabela de caracteres ASCI [0- 255]
	char numeros[5] = { 65, 66, 97, 68, 69, 97, 98};
	char nome[10] = "Alberto";
	printf("%c\n", numeros[0]);
	printf("%c\n", numeros[1]);
	printf("%c\n", numeros[2]);
	printf("%c\n", numeros[3]);
	printf("%c\n", numeros[4]);
	printf("%c\n", numeros[5]);
	printf("%c\n", numeros[6]);
	printf("%s\n", numeros[7]);//String (Todos juntos)
	printf("%s\n", nome);//String (Vetor de caracteres)
	getch();
}