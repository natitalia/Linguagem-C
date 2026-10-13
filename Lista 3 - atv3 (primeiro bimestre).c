#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char name[50], sobre[50];
	
	printf("\neste algorítimo irá ler seu nome e depois o seu sobrenome \n\nEscreva o seu nome: ");
	scanf("%s", &name);
	
	printf("\nEscreva seu sobrenome: ");
	scanf("%s", &sobre);
	
	printf("\n\nSeu nome completo é: %s %s", &name, &sobre);
	getch();
	
	printf("\n\nAcaboooooou :)");
	getch();
	
	return 0;
}
