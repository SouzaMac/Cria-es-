#include<stdio.h>
#include<conio2.h>

int calcula(int n1, int n2, char op)
{	
	int resultado;
	
	switch(op)
	{
		case'+':	resultado = n1+n2;
					break;
		case'-':	resultado = n1-n2;
					break;
		case'/':	resultado = n1/n2;
					break;
		case'*':	resultado = n1*n2;
					break;
	}	
	
	return resultado;
}

void processo()
{
	int n1, n2, resultado;
	char op;
	
	do
	{
		fflush(stdin);
		printf("###Calculadora###\n");
		printf("-------------------\n");
		scanf("%d",&n1);
		scanf("%c", &op);
		scanf("%d",&n2);
		resultado= calcula(n1,n2,op);
		printf("%d", resultado);
		fflush(stdin);
		op=getch();
		clrscr();
		
	}while(op!=27);
}


int main(void)
{
	printf("###modo de uso###\n");
	printf("digite um numero, o simbolo da operacao que gostaria (+ - / *) e outro numero\n");
	getch();
	clrscr();
	processo();
	
	return 0;
}
