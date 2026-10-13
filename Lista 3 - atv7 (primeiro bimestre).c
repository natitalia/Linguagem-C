#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int nasc, ano, result;
	
	printf("\nEste algorítimo irá descobri a sua idade, uuuuu, me meda! :0");
	
	printf("\n\nDigite o ano do seu nascimento: ");
	scanf("%d", &nasc);
	
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano);
	
	result = ano - nasc;
	
	printf("\n\nO resultado é: %d", result);
	getch();
	
	printf("\n\nAcabooooooooou :)");
	getch();
	
	return 0;
}
