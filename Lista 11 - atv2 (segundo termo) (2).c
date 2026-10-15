#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

char *retorn_cat(int idade)
{
	switch(idade)
	{
		case 5 ... 7:
			return "Infantil A";
			break;
		case 8 ... 10:
			return "Infantil B";
			break;
		case 11 ... 13:
			return "Juvenil A";
			break;
		case 14 ... 17:
			return "Juvenil B";
			break;
		case 18 ... 200:
			return "Adulto";
			break;
		default:
			return "Inválido!!!";
	}
}

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int idade;
	
	printf("\nInforme sua idade: ");
	scanf("%d", &idade);
	
	printf("\nSua categoria é: %s", retorn_cat(idade));
	
	printf("\n\nAcaboooooooooou :)");
}
