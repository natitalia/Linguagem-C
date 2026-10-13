#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, num, result=1;
	
	printf("\nEste algorítimo lê 4 números e depois multiplica eles!\n\n");
	
	for(i=1; i<=4; i++)
	{
		printf("\nDigite o %d número: ", i);
		scanf("%d", &num);
		
		result = result*num;
	}
	
	printf("\n\nO resultado da múltipicação é: %d", result);
	getch();
	
	printf("\n\nAcabooooooooooou :)");
	getch();
	
	return 0;
}
