#include<stdio.h>

int main()
{
  int num, maior = 0, menor = 0, y=0;
 
    printf("Digite um numero:");
    scanf("%d",&num);
   
  menor = num;
  maior = num;
 
  for( y = 1; y < 10; y++ ){
   
    printf("Digite um numero:");
    scanf("%d",&num);
 
    if(num > maior) maior = num;
    if(num < menor) menor = num;
   
  }

  printf ("%d %d\n",menor, maior);
 
  return 0;
 
}