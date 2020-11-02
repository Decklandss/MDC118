#include <stdio.h>

#include <stdlib.h>

int main(){
 char p1[30],p2[30];
 //captura palavras
 printf("Informe palavra 1: ");
 gets(p1);
 printf("Informe palavra 2: ");
 gets(p2);
 //verifica se sao iguais
 if(strcmp(p1,p2)==0)
 printf("\nPalavras sao iguais.");
 if(strcmp(p1,"matricula")==0)
 printf("\nPalavra 1 igual matricula.");
 if(strcmp(p2,"telefone")==0)
 printf("\nPalavra 2 igual telefone.");
 return 0;
}