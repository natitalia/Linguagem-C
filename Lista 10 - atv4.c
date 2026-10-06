#include<conio.h>
#include<stdio.h>

#define TF 10

int igual_media(int vet[])
{
	int i, soma=0, achou=0;
	float media;
	
	for(i=0; i<TF; i++)
	{
		printf("\nInforme o valor %d: ", i+1);
		scanf("%d", &vet[i]);
		
		soma = soma + vet[i];
	}
	media = (float)soma / TF;
	
	for(i=0; i<TF; i++)
	{
		if(vet[i] == media)
		{
			achou = 1;
		}
	}
	return achou;
}


int main()
{
	int vet[TF];
	
	if(igual_media(vet) == 1)
	{
		printf("\nExiste um valor igual a media!");
	}
	else
	{
		printf("\nNenhum valor eh igual a media.");
	}
	return 0;
}

