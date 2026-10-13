#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char name[50];
	
	printf("\nEste programa lê o seu nome!\n\nEscreva aqui: ");
	scanf("%s", &name);
	
	printf("\nSeu nome é: %s!", name);
	
	printf("\n\nAcabooooooooou :)");
	getch();
	
	return 0;
}
