//7. Declare um inteiro. Verifique se sua posi��o de mem�ria � divis�vel por 5.
#include <stdio.h>
    int main(){
        int a;
        int *pont_a = &a;

        printf("Posicao de memoria: %d\n", pont_a);

        if((int)pont_a%5 == 0){
            printf("A posicao de memoria eh divisivel por 5!\n");
        }
        else{
            printf("A posicao de memoria nao eh divisivel por 5!\n");
        }

    }
