#include <stdio.h>
    
int main (int argc, char** argv)
    {
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d",&num);
        
        if(num%2==0)
        {
        printf("Par");
        }
        else
        printf("Ímpar");
    
    return 0;
}