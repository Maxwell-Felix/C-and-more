/*
Aluno..: Maxwell Feliz Silva 
Turma..: B
Data...: 16/09/2021
RA.....: BP3022463
*/
#include <stdio.h>

/*
 Escreva um programa que leia n�meros inseridos por um usu�rio 
 e os some at� que esse usu�rio digite o valor 0. No final apresenta a soma.
*/

int main(void)
{
	
int num, num1, soma = 0;

	do
	{
	printf("\nDigite um numero: ");
	scanf("%d", &num1);

	soma = soma + num1;
	if (num1<=0)
	{	
	printf("soma: %d", soma);
	}
	}while(num1>0);
	

return 0;

}