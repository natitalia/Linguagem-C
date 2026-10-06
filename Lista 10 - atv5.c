#include<conio.h>
#include<stdio.h>

#define TF 10

int menor(int vet[])
{
	int i, posic=0;
	
	for(i=0; i<TF; i++)
	{
		printf("Informe um valor %d: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<TF; i++)
	{
		if( vet[i] < vet[posic])
		{
			posic = i;
		}
	}
	
	return posic;
} 


int main()
{
	int vet[TF], pos;
	
	pos = menor(vet);
	
	printf("\nMenor valor: %d", vet[pos]);
	printf("\nPosicao no vetor: %d (indice) / %d (contando a partir de 1)", pos, pos + 1);
	return 0;
}
