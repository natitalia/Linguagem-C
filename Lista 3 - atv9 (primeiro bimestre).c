#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float i=0, not=0, media=0, soma=0;
	 
	printf("\nEste algorítimo lê a média final do aluno :)");
	
	for(i=0; i<3; i++)
	{
		printf("\n\nDigite a nota do aluno: ");
		scanf("%f", &not);
		soma = soma + not;
	}
	
	media = soma/3;
	
	printf("\n\nSua média é: %.2f", media);
	
	printf("\n\nAcaboooooooou :)");
	
	return 0;
}
