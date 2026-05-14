#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
	//Gerar 10 números aleatórios inteiros de 0 - 10
	int numeros[10];
	//Pega o tempo atual
	srand(time(NULL));
	//Gera o 10 número a partir do tempo
	for(int i = 0; i < 10; i++){
		int x = rand() %  11;
		numeros[i] = x;
		
	}
	//Mostrar os números gerados
	for(int i = 0; i < 10; i++){
		printf("%d\n", numeros[i]);
	}
	
	getch();
}