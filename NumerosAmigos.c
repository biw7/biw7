#include <stdio.h>

#include <stdlib.h>





int somadiv (int);
void comparesoma(int, int);




int main()
{

  int a,b;







  do {
  scanf ("%d %d", &a, &b);

} while (a >= b);
  
  

 
 comparesoma(a, b);


 


}




int somadiv (int x) {



    int  i;

    int soma = 0; 

 
     for (i=1; i<x; i++) {


  if (x % i == 0) {

                soma    = soma + i;

    }

}


return soma;




}


void comparesoma(int a, int b) {
     
     
     int i,j,k,l;
     
     
    
   
   
  for (i=a; i <= b; i++) {
      
      k = somadiv(i);
        
        for (j=b; j >= a ; --j){
      
          l = somadiv (j);
          
           if (k == j && l == i && j!=i && i<j) {
                  
                 printf ("%d %d\n", i,j);
                 
                 }
                 
                 }  
          
                 
               
        
     }


}

