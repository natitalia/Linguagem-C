#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, soma;
	
	printf("\nEste algorítimo lê os números scolhidos e os soma!");
	printf("\nEscolha um número: ");
	scanf("%d", &num1);
	
	printf("\nEscolha outro número: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	printf("\n\nA soma destes dois números é: %d!", soma);
	getch();
	
	printf("\n\nAcabooooooooooooou :)");
	getch();
	
	return 0;
	
}
