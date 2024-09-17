//7. Considere o código abaixo:
// typedef struct No {
//  int numero;
//  struct No *p;
// } no;
// int main() {
//  no * p1, * p2, * p3;
//  p1 = (no *) malloc(sizeof(no));
//  scanf("%d", &(p1->numero));
//  p2 = (no *) malloc(sizeof(no));
//  scanf("%d", &(p2->numero));
//  p3 = (no *) malloc(sizeof(no));
//  scanf("%d", &(p3->numero));
//  p1->p = p2;
//  p2->p = p3;
//  p3->p = NULL;
//  no * aux = p1;
//  while(aux!= NULL) {
//  printf("%d ", aux->numero);
//  aux = aux->p;
//  }
//  return 0;
// }
// Refaça esse código substituindo os ponteiros p1, p2 e p3 por um vetor alocado
// dinamicamente de tamanho N. N é um valor determinado pelo usuário.
// Mantenha o objetivo do código em mente e reestruture ele para manter a sua
// dinâmica.

#include <stdio.h>
#include <stdlib.h>
    typedef struct No
    {
        int numero;
        struct No *p; // ponteiro para o proximo no
    }no;
    
    int main(){
        int num;
        printf("Digite o numero de nos: ");
        scanf("%d", &num);

        no *vetor;
        vetor = (no*)malloc(num*sizeof(no));

        if(vetor == NULL){
            printf("Erro de alocação de memoria para o vetor\n");
            return 1;
        }

        for(int i = 0; i < num; i++){
            printf("Qual o valor do no %d: ", i+1);
            scanf("%d", &vetor[i].numero);

            if(i < num -1){
                vetor[i].p = &vetor[i+1]; //ponteiro p do struct aponta para o proximo no
            }
            else{
                vetor[i].p = NULL;
            }
        }

        no *auxiliar;
        auxiliar = &vetor[0]; // primeiro no
        printf("Valores da lista encadeada:\n");
        while (auxiliar!=NULL)
        {
            printf("%d ", auxiliar->numero);
            auxiliar = auxiliar->p;
        }
        printf("\n");

        free(vetor);
        return 0;
        

    }