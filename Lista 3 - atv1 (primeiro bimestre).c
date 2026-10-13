#include<conio.h>
#include<stdio.h>
#include<locale.h>	//P/ acentuar

void main()
{
    setlocale(LC_ALL, "Portuguese");	//P/ acentuar
    
	printf("\nEste programa irá exibir um texto grande e complexo:...\nClique em qualquer tecla para ver este texto :)");
	getch();	//P/ pular o texto somente apertando o enter
	
	printf("\n\nOlá mundo!!");
	getch();
	
	printf("Acaboooou :)");
	getch();
	
	return 0;
}
