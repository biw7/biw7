#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int quadradoperfeito (int n);


int main() {
    
    
 int flag, n, i;
 
  


 
    
 
 for (i=1000; i<10000; i++)    {   
    
   
  n=i;
   
  flag=quadradoperfeito(n);
    
    
    
  if (flag ==  1) {
           
           
           printf ("%d\n", n);
                      
           }  
    
    
}
    
    
    
    system ("PAUSE");
    return 0;
    
    
    
    
}





int quadradoperfeito(int n) {


int flag;
int x , y,soma;






x=n%100;
y=n/100;
soma = x+y;

int sq;
sq=sqrt(n);


if (soma==sq) 

{

  flag=1;
              
}
  
  else { 
        flag=0;
       }
  
  
  
  return flag;
  
}
