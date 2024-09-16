//5. Declare um ponteiro genérico com 40 bytes de espaço. Adicione 10 inteiros nestes 40 bytes e imprima esses valores. Não declare mais nenhuma variável além do ponteiro genérico.
#include <stdio.h>
#include <stdlib.h>
    int main(){
        void *ponteiro_generico;
        ponteiro_generico = (void*)malloc(40);

        if (ponteiro_generico == NULL) {
            printf("Erro ao alocar memoria!\n");
            return 1;
        }

        
        for(int i = 0; i < 10; i++){
            *((int *)ponteiro_generico + i) = i + 1;
        }

        printf("valores armazenados:\n");
        for(int i = 0; i < 10; i++){
            printf("%d ", *((int*)ponteiro_generico+i));
        }
        printf("\n");

        free(ponteiro_generico);
        return 0;
    }