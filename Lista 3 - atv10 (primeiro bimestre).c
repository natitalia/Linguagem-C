#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float i=0, not=0, media;
	
	printf("\nEste algorítimo calcula a média de dois valores");
	
	for(i=0; i<2; i++)
	{
		printf("\n\nDigite a nota: ");
		scanf("%f", &not);
	}
	
	media = not/2;
	printf("\nSua média é: %.2f", media);
	
	printf("\n\nAcabooooou :)");
}
