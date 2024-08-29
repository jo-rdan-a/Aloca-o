#include <stdio.h>
#include <stdlib.h>

    struct Aluno{
        int matricula;
        char nome;
        float n1, n2, n3;
    };


    int main(){
    
        struct Aluno aluno;
        
        int tam = 0;
        tam = (int)sizeof(struct Aluno);
        
        printf("tamanho: %d",tam);
        }