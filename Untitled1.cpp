#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int calculoVitorias(int n1, int n2){
	return n1 - n2;
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int vitorias, derrotas, saldoVitorias;

	printf("Quantidade de vitórias: \n");
	scanf("%d", &vitorias);
	
	printf("Quantidade de derrotas: \n");
	scanf("%d", &derrotas);
	
	saldoVitorias = calculoVitorias(vitorias, derrotas);
	
	if(saldoVitorias <= 10){
		printf("O Herói tem saldo de vitórias de %d  está no nível de Ferro!\n", saldoVitorias);
	}else if(saldoVitorias <= 20){
		printf("O Herói tem saldo de vitórias de %d está no nível de Bronze!\n", saldoVitorias);
	}else if(saldoVitorias <= 50){
		printf("O Herói tem saldo de vitórias de %d está no nível de Prata!\n", saldoVitorias);
	}else if(saldoVitorias <= 80){
		printf("O Herói tem saldo de vitórias de %d está no nível de Ouro!\n", saldoVitorias);
	}else if(saldoVitorias <= 90){
		printf("O Herói tem saldo de vitórias de %d está no nível de Diamante!\n", saldoVitorias);
	}else if(saldoVitorias <= 100){
		printf("O Herói tem saldo de vitórias de %d está no nível de Lendário!\n", saldoVitorias);
	}else if(saldoVitorias >= 101){
		printf("O Herói tem saldo de vitórias de %d está no nível de Imortal!\n", saldoVitorias);
	}
	
	system("pause");
	return 0;
}
