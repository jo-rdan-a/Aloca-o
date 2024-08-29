#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}Cadastro;

Cadastro* ponteiro(int N){
    Cadastro* vetor = (Cadastro*)malloc(N * sizeof(Cadastro));

         for (int i = 0; i < N; i++) {
            printf("escreva os dados da pessoa %d:\n", i + 1);
            
            printf("nome: ");
            fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
            vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';
            
            printf("idade: ");
            scanf("%d", &vetor[i].idade);
            getchar();
            
            printf("endereço: ");
            fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
            vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = '\0';
            
            printf("\n");
        }
    
        return vetor;
    }
    
        int main(){
        
             int N;
        
            printf("escreva o número de cadastros: ");
            scanf("%d", &N);
            Cadastro* vetor = criarCadastro(N);
        
            free(vetor);
        
            return 0;
        }