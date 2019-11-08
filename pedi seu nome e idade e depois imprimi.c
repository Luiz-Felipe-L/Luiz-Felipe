#include<stdio.h>
#include <stdio.h>

int main (void)
{
	
	char nome [100];
	printf("Digite seu nome: \n");
	scanf ("%s", &nome);
	
	int idade;
	printf("Digite sua Idade:\n");
	scanf("%d",&idade);
	printf("%s\n",nome);
	printf("Idade:%d\n",idade);
	system("pause");
	return 0;
}
