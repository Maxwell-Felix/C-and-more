#include <stdio.h>
 
int main()
{
int fatorial, n;
printf("entre com um numero para calcular fatorial: ");
scanf("%d", &n);
 
for(fatorial = 1; n > 1; n = n - 1){
fatorial = fatorial * n;
}



return 0;
}
