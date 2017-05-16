#include <stdio.h>
#include <stdlib.h>


void leVet (int tam_vet);
void ordena(int *, int tam_vet);
int binarySearch (int tam_vet, int search);


int main(){
    
    int tam_vet,search,found;
    
    
  
  scanf("%d %d", &tam_vet,&search);
  
  
  leVet(tam_vet);
  
  
  found=binarySearch (tam_vet, search);
  
  if (found > -1) {
            
            printf ("%d\n", found);
            }  
   else {
        
        printf ("Chave inexistente\n");
        }
    
     
  
 system ("PAUSE");
 return 0;
  
    
}

void leVet (int tam_vet) {
    
    int *vet,i,var; 
    
    vet = (int *) malloc(tam_vet * sizeof(int)); 
     
      for (i = 0; i < tam_vet; i++)
        {   
            scanf("%d", &var);
            vet[i] = var;
        }
 ordena (vet, tam_vet);    


}

void ordena(int *vet, int tam_vet){

int i, j, aux;
for(i=0; i < tam_vet-1; i++){
  for(j=tam_vet-1;j>i;--j){
    if(vet[j-1]>vet[j]){
      aux = vet[j-1];
      vet[j-1] = vet[j];
      vet[j]= aux;
    }
  }
}
}

int binarySearch (int tam_vet, int search){
    
    int *vet;
    int x, inicio, meio, fim;
    
    
    inicio = 0;
    fim = tam_vet - 1;
        
       
        while (inicio <= fim)
        {
              
             
              meio = (inicio + fim) / 2;
              
             
              if (search == vet[meio])
              {
                 x = 0;
                 break;
              }
              
             
              else if (search < vet[meio])
              {
                 fim = meio - 1;
                 continue;
              
              }
           
              else if(search > vet[meio])
              {
                 inicio = meio + 1;
                 continue;
              }
              
              
              else
              {
                 x = 1;
                 break;
              }
              
        }
        
       
       int found;
        
        if (x == 0){
           found = meio;                     
        } 
        
        else { 
             found = -1;
            
        }

    
    return found;
    
}
