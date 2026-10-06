#include<conio.h>
#include<stdio.h>

#define TF  5
void vetor(float vet[], int quant)
{
	int i;
	
	for(i=0; i<quant; i++)
	{
		printf("\nDigite o valor %d: ", i + 1);
		scanf("%f", &vet[i]);
	}
}

int main()
{
	float vet[TF];
	int quant;
	
	printf("\nQuantos valores deseja digitar? (ate %d): ", TF);
	scanf("%d", &quant);
	
	while (quant < 1 || quant > TF)
	{
		printf("\nValor invalido, tente ir de 1 ate %d: ", TF);
		scanf("%d", &quant);
	}
	
	vetor(vet, quant);
	
	return 0;
}
