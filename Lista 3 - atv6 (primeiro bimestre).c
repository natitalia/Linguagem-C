#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, result=0;
	
	printf("\nEste algorítimo lê 3 números, subtraindo e dividindo-o, te entregando o resultado");
	
	printf("\n\nDigite o número 1: ");
	scanf("%d", &num1);
	
	printf("\nDigite o número 2: ");
	scanf("%d", &num2);
	
	printf("\nDigite o número 3: ");
	scanf("%d", &num3);
	
	result = (num1 - num2)/ num3;
	
	printf("\n\nSeu resultado será: %d", result);
	getch();
	
	printf("\n\nAcaboooooooooooou :)");
	
	return 0;
	
}
