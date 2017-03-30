#include <stdio.h>
#include <stdlib.h>




int primo (int x);



int main () {
    
    int x, y,flag;
    
    

    
    for (y=5000; y<7000; y++) {
        
        
     x=y;
        
       flag = primo (x);
        
        if (flag==1) {
                     
                     printf ("%d\n", x);
                     
                     }
        
        
        
        }
    
    
    
    
    
 system ("PAUSE");
 return 0;   
}




int primo(int x)
{
    
  int i,flag,div;  
    
    div=0;



 for (i=1; i<=x; i++) {
    
    
    if (x%i==0) {
                div++; }
                
                }


  
      if (div==2)
        { flag = 1; }
        
        else {flag=0;}
      
  	
  return flag;
}
