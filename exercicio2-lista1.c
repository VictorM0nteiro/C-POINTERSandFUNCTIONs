// 2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>
    int main(){
        int var1;
        int var2;

        int *p_var1 = &var1;
        int *p_var2 = &var2;
        // printf("var1 eh > que var 2, end do var1: %d\n", p_var1);
        // printf("var2 eh > que var 1, end do var2: %d\n", p_var2);

        if(p_var1 > p_var2){
            printf("var1 eh > que var 2, end do var1: %d\n", p_var1);
        }
        else{
            printf("var2 eh > que var 1, end do var2: %d\n", p_var2);
        }
        return 0;
    }