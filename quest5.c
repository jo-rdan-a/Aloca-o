#include <stdio.h>
#include <stdlib.h>

    int main(){
        int valor;
        
        do{
            scanf("%d",&valor);
        }while(valor < 0);
        int *v;
    
         v = (int *)malloc(valor * sizeof(int));
    
         for (int i = 0; i < valor; i++) {
            printf("escreva um valor para o vetor:");
            scanf("%d", &v[i]);
            if (v[i] < 2)
            {
                i--;
            }
            
        }
    free(v);
}