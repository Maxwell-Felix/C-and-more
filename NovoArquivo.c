#include <stdio.h>

int main(void)
{
	
int num, num1, soma;

printf("digite um numero: ");
scanf("%d", &num);

if(num>0){
	do{
	printf("\nDigite um numero: ");
	scanf("%d", &num1);

	if(num1>0)
		
	soma = num + num1;
	printf("%d", &soma);		
	}
	while(num>0);
}	

return 0;

}