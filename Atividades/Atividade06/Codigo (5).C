#include <stdio.h>
#include <conio.h>
  
  enum meses_do_ano {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho,
  Julho, Agosto, Setembro, Outubro, Novembro, Dezembro}meses;
int main(void)
{
  printf("Digite o numero do mes: ");
  scanf("%d",&meses);
  
  if((meses >= Janeiro) && (meses <= Dezembro))
  {
  
    switch(meses)
    {
    case Janeiro:
    printf("%d - Janeiro",meses);
    break;
    
    case Fevereiro:
    printf("%d - Fevereiro",meses);
    break;
    
    case Marco:
    printf("%d - Marco",meses);
    break;
    
    case Abril:
    printf("%d - Abril",meses);
    break;
    
    case Maio:
    printf("%d - Maio",meses);
    break;
    
    case Junho:
    printf("%d - Junho",meses);
    break;
    
    case Julho:
    printf("%d - Julho",meses);
    break;
    
    case Agosto:
    printf("%d - Agosto",meses);
    break;
    
    case Setembro:
    printf("%d - Setembro",meses);
    break;
    
    case Outubro:
    printf("%d - Outubro",meses);
    break;
    
    case Novembro:
    printf("%d - Novembro",meses);
    break;
    
    case Dezembro:
    printf("%d - Dezembro",meses);
    break;
    
    }
  }
  else 
  {
    printf("Valor INVALIDO!!!\n");
    
    printf("Os valores validos para os meses do ano sao: \n\n");
    
    for(meses = Janeiro; meses <= Dezembro; meses++)
      printf("Mes: %d \n",meses);
  }
  
  getch();
  return 0;
}