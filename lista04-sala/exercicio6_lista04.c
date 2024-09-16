//6. Implemente o Struct valor, que contêm um número flutuante e um ponteiro do tipo struct valor. Declare a variável PV do tipo struct valor e atribua um valor real ao número e o endereço de memória da variável PV ao ponteiro;

#include <stdio.h>
#include <stdlib.h>
    typedef struct valor
    {
        float numero;
        struct valor *ponteiro; 
    }Valor;
    
    int main(){
        Valor PV;

        PV.numero = 12.22;
        PV.ponteiro = &PV;

        
        printf("Numero: %.2f\n", PV.numero);
        printf("Endereco de PV: %p\n", (void *)PV.ponteiro);
        printf("Endereco de PV (utilizando ponteiro): %p\n", (void *)PV.ponteiro);

        return 0;
    }