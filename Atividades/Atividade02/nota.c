    #include <stdio.h>
  
    int main (int argc, char** argv)
    {
      int ruim, insuficiente, suficiente, bom, otimo;
      
      printf ("Digite um valor quantitativo de 1 a 5: ");
      scanf("%d,%d,%d,%d,%d", &ruim, &insuficiente, &suficiente, &bom, &otimo);
      
      switch ( ruim, insuficiente, suficiente, bom, otimo);
      {
        case 1 :
        printf ("ruim\n");
        break;
        
        case 2 :
        printf ("insuficiente\n");
        break;
        
        case 3 :
        printf ("suficiente\n");
        break;
        
        case 4 :
        printf ("bom\n");
        break;
        
        case 5 :
        printf ("otimo\n");
        break;
             
        default :
        printf ("valor quantitativo invalido!\n");
      }
      
      return 0;
    }