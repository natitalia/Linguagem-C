#include<stdio.h>
#include<conio.h>

#define TF 5

void rotina_nota(int vet[])
{
	int i, soma=0;
	float media;
	
	printf("\n\n<<< NOTAS AO LONGO DO ANO >>>\n\n");
	
	for(i=0; i<TF; i++)
	{
		printf("Nota: ");
		scanf("%d", &vet[i]);
		
		soma = soma	+ vet[i];
	}
	
	media = soma / TF;
	printf("\nA media eh: %.2f", media);
}


void main()
{
	int vet[TF];
	
	rotina_nota(vet);
}

