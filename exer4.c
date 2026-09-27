#include<conio.h>
#include<stdio.h>

//Exer 4

int horaExtra(float horaTrab, float horaPadr)
{
	float extra;
	
	if(horaTrab > horaPadr)
	{
		extra = horaTrab - horaPadr;
	}
	else
	{
		extra = 0;
	}
	
	return extra;
}

void main()
{
	char nome[50];
	int i;
	float horaTrab, result1, horaPadr = 8.0;
	
	for (i = 0; i <= 6; i++)
	{
		printf("\nEmpregado(a): ");
		scanf("%c", &nome);
		
		printf("\nSeu salario eh: ", i + 1);
		scanf("%f", &horaTrab);
		
		result1 = horaExtra(horaTrab, horaPadr);
		printf("\nHoras extras: %.2f", nome, result1);
	}
}
