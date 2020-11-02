#include<stdio.h>
#include <stdlib.h>

float media (int n, float *telefone);
int main (void)
{
  float telefone[10];
  float nomes;
  int i;
  

  for (i = 0; i < 10; i++)
  {
    printf";Digite os valores dos contatos: ");
    scanf("%f", &telefone[i]);
  }
  
  
  nomes = media(10,telefone);
  
  printf ( "\nMedia = %.1f \n", nomes );
  
  system("pause");
  return 0;
}
*/
float media (int n, float *telefone)
{
  int i;
  float m = 0, soma = 0;
  
 
  for (i = 0; i < n; i++)
    soma = soma + telefone[i];
  
  m = soma / n;
  
  return m;
}