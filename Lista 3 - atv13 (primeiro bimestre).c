#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float not1, not2, media=0;
	
	printf("\nEste algorítimos vê se o aluno foi aprovado ou reprovado");
	printf("\n\nDigite a nota do aluno: ");
	scanf("%f", &not1);
	printf("\nDigte a segunda nota do aluno: ");
	scanf("%f", &not2);
	
	media = not1+not2/2;
	
	if(media>=7)
	{
		printf("\n\nParabéns, você foi aprovado!");
	}
	else
	{
		printf("\n\nVocê foi reprovado!");
	}
	
	printf("\n\nAcaboooooooooou :)");
	
	return 0;
}
