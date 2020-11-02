#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dia, mes, ano;
    long int amd;
    char data[9] = {'\0'};

    printf("Entre com a data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("\n\n");

    sprintf(data, "%d%02d%02d", ano, mes, dia);
    amd = atol(data);

    printf("Dia = %d\n", dia);
    printf("Mes = %d\n", mes);
    printf("Ano = %d\n", ano);
    printf("AAAAMMDD = %ld\n", amd);

    return 0;
}