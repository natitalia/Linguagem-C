#include<conio.h>
#include<stdio.h>

#define TF 10

void maior_menor(int vet[])
{
	int i, maior=0, menor=9999;
	
	for(i=0; i<TF; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);
		
		if(vet[i] > maior)
		{
			maior = vet[i];
		}
		if(vet[i] < menor)
		{
			menor = vet[i];
		}
	}
	
	printf("\nO maior numero eh: %d", maior);
	printf("\nO menor numero eh: %d", menor);
}


main()
{
	int vet[TF];
	
	maior_menor(vet);
}
