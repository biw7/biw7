#include <stdlib.h>
#include <stdio.h>

int main ()
{

int i=0; 
int n,x[100],y[100]; 

             

printf ("Conversao Decimal p/ Binario\n");
printf("Digite o numero decimal:\n");

scanf("%d", &n);

printf ("%d em binario:\n", n);

 
  while (n >= 1){     
   x[i]= n / 2;  
   y[i] = n % 2; 
   n=x[i];   
   i++;
   
   }
   
  
  while (i>=0) {  
      
      if (y[i]==0 || y[i]==1) {
      printf("%d",y[i]);  }         
   
   i--;
     
   }


printf("\n");


system ("PAUSE");
return(0);


}
