#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(int argc, char *argv[])
{
    
    int i, n, pecas[i], sexo [i];
    
    char  nome[i]; 
    float salario[i];
    
   
    
    
    
    
    
    printf ("Numero de operarios a ser inseridos:");
    scanf ("%d", &n);
   
  
    for (i=0; i<n; i++) {
    
    
    printf ("inserindo operario %d:\n", i+1);
    
    printf ("Nome:");
    scanf ("%s", &nome[i]);
    
   do { 
     printf ("Sexo:");
    scanf ("%d", &sexo[i]);
    }     while (sexo[i]!= 1 && sexo[i]!= 2);


  
  printf ("Numero de pecas/ mes:");
  scanf ("%d", &pecas[i]);
  
  
}
  
  
  
  
  
  
  for (i=0; i<n; i++) {
  
   if (pecas[i] <= 30) 
      {salario[i] = 1000; }
      
     else if ( pecas [i] > 30 && pecas[i] <=35)
        { salario[i] = 1000 + 30*pecas[i]; }
        
       else if (pecas [i] > 35) 
          {  salario [i] = 1000 + 50*pecas[i]; }
          
          else { printf ("Numero de pecas invalido!"); break; }
  
  
}


float totalfolha=0;
int totalpecas=0;

for (i=0; i<n; i++) {
  
    
    
    
    totalfolha = totalfolha + salario[i];
    totalpecas= totalpecas + pecas[i];
    
      
                       }
  
 
 
 
 float  maiorsalario=salario[i];
 
 for (i=0; i<n; i++) { 
      
  
      
      if ( salario[i] > salario[i-1]) 
       {  salario[i] = maiorsalario; }
       
       
}
 
 printf ("\n\n");
 
 printf ("Total da folha de pagamento : %f", totalfolha); 
 
 printf ("\n");
 
 printf ("Total de pecas fabricadas : %d", totalpecas);
 
 printf ("\n");
 printf ("Maior Salario = %f", maiorsalario);
  
 printf ("\n\n\n\n");
    
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  system("PAUSE");	
  return 0;
}
