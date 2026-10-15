#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
#define TF 200

void *aocontri(char text[TF])
{
	int tam, i;
	tam = strlen(text);
	
	for(i=tam-1; i>=0; i--)
	{
		printf("%c", text[i]);
	}
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char text[TF];
	
	printf("\nInforme um texto: ");
	
	fflush(stdin);
	gets(text);
	
	printf("\nAo contrário fica: %s", aocontri(text[TF]));
	printf("\n\nAcabooooooooooooou :)");
}
