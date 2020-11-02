#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

int main()
{

 char nome[80];

 printf("Digite uma frase: ");
 fgets(nome, stdin);

printf("%s", nome);

system("pause");
return 0;
}