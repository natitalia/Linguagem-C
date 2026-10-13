#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	printf("\nEste algorítimo mostra o maior número entre os escolhidos");
	
	printf("\n\nDigite um número: ");
	scanf("%d", &num1);
	printf("\nDigite outro número: ");
	scanf("%d", &num2);
	
	if(num1>num2)
	{
		printf("\n\nO maior número é: %d", num1);
	}
	if(num2>num1)
	{
		printf("\n\nO maior número é: %d", num2);
	}
	else
	{
		printf("\n\nOs dois são iguais");
	}
	
	printf("\n\nAcabooooooooooou :)");
	
	return 0;

}
