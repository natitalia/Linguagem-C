#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

char *msg_ola_mundo()
{
	return "Olá mundo!!!!";
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\n\nReturno da função string: %s", msg_ola_mundo());
}
