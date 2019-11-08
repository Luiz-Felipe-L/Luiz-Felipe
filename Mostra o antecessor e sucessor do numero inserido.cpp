#include <stdio.h>
#include <stdlib.h>

main (void)
{
	float n;
	printf("Digite o numero: ");
	scanf("%f",&n);
	printf("Antecessor: %2.f e Sucerssor: %2.f",n-1,n+1);
}
