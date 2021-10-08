/*
Aluno..: Maxwell Feliz Silva 
Turma..: B
Data...: 16/09/2021
RA.....: BP3022463
*/
#include <stdio.h>

int main(void) {

  /*Repita o exercício anterior, mas agora serão recebidas 10 idades. 
  Se for recebida uma idade inválida (menor ou igual a zero), deve ser pedido 
  uma nova sem contar como uma entrada dentre as 10*/


int idade, i;
 
 
  for (i = 0; i < 10; i++)

    do{
      printf("Entre com uma idade:");
      scanf("%d", &idade); 
  
      if(idade <= 0)
      printf("Idade inválida.");

     }while(idade < 0 || idade == 0);
    
  
printf ("Foram inseridas 10 idades válidas");
 return 0;
}