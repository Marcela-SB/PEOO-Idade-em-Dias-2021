#include <stdio.h>

int main() {
	printf("Escreva a sua idade em dias:\n");
	int Tempo,Ano,Mes,Dia;
	
	scanf("%d",&Tempo);
	
	Ano=Tempo/365;
	Mes=(Tempo%365)/30;
	Dia=(Tempo%365)%30;
	
	printf("%d ano(s)\n",Ano);
	printf("%d mes(es)\n",Mes);
	printf("%d dia(s)\n",Dia);
	
	return 0;
}
