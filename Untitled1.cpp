#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int calculoVitorias(int n1, int n2){
	return n1 - n2;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int vitorias, derrotas, saldoVitorias;

	printf("Quantidade de vit�rias: \n");
	scanf("%d", &vitorias);
	
	printf("Quantidade de derrotas: \n");
	scanf("%d", &derrotas);
	
	saldoVitorias = calculoVitorias(vitorias, derrotas);
	
	if(saldoVitorias <= 10){
		printf("O Her�i tem saldo de vit�rias de %d  est� no n�vel de Ferro!\n", saldoVitorias);
	}else if(saldoVitorias <= 20){
		printf("O Her�i tem saldo de vit�rias de %d est� no n�vel de Bronze!\n", saldoVitorias);
	}else if(saldoVitorias <= 50){
		printf("O Her�i tem saldo de vit�rias de %d est� no n�vel de Prata!\n", saldoVitorias);
	}else if(saldoVitorias <= 80){
		printf("O Her�i tem saldo de vit�rias de %d est� no n�vel de Ouro!\n", saldoVitorias);
	}else if(saldoVitorias <= 90){
		printf("O Her�i tem saldo de vit�rias de %d est� no n�vel de Diamante!\n", saldoVitorias);
	}else if(saldoVitorias <= 100){
		printf("O Her�i tem saldo de vit�rias de %d est� no n�vel de Lend�rio!\n", saldoVitorias);
	}else if(saldoVitorias >= 101){
		printf("O Her�i tem saldo de vit�rias de %d est� no n�vel de Imortal!\n", saldoVitorias);
	}
	
	system("pause");
	return 0;
}
