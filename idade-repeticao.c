/*
Aluno..: Maxwell Feliz Silva 
Turma..: B
Data...: 16/09/2021
RA.....: BP3022463
*/
#include <stdio.h>

/*
Repita o exercício anterior, mas agora serão recebidas 10 idades.
Se for recebida uma idade inválida (menor ou igual a zero),
deve ser pedido uma nova sem contar como uma entrada dentre as 10
*/

int main(void)
{
	
int idade1, idade2;

printf("Digite a idade: ");
scanf("%d", &idade1);

if(idade1<=0)
{
	do
{
	printf("Digite a idade novamente: ");
	scanf("%d", &idade2);
}while(idade2<=0);
}	
	return 0;
}	