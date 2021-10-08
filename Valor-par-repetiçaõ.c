#include <stdio.h>

int main() {
 int num1,num,cont;
  cont=0;
   printf("Digite um numero: ");
   scanf("%d", &num);
   do 
   {   
   	printf("Digite um numero: ");
   	scanf("%d", &num);
	   
   }while(num%2==0);
    
    for(num1=1;num1<=5;num1++);
   	printf("Numero Impar");
}