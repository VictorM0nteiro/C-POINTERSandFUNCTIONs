#include<stdio.h>
#include<stdlib.h>
    int main(){
        int a = 10;
        int *pont_a;
        pont_a = &a;
        int **pont_pont_a;
        pont_pont_a = &pont_a;
        int ***pont_pont_pont_a;
        pont_pont_pont_a = &pont_pont_a;

        printf("a = %d\n", a);
        printf("&a = %u\n", &a);

        printf("\n");

        printf("pont_a = %u\n", pont_a); // endereço de a
        printf("*pont_a = %u\n", *pont_a); // valor de a;

        printf("\n");

        printf("pont_pont_a = %u\n", pont_pont_a); // endereço de pont_a
        printf("*pont_pont_a = %u\n", *pont_pont_a); // valor de pont_a que é o endereço de a
        printf("**pont_pont_a = %u\n", **pont_pont_a);// emprime o valor de a;

        printf("\n");

        printf("pont_pont_pont_a = %u\n", pont_pont_pont_a); // endereco de pont_pont_a;
        printf("*pont_pont_pont_a = %u\n", *pont_pont_pont_a); // valor de pont_pont_a que e o endereco de pont_a;
        printf("**pont_pont_pont_a = %u\n", **pont_pont_pont_a); // valor de pont_a que é o endereço de a
        printf("***pont_pont_pont_a = %u\n", ***pont_pont_pont_a); // imprime o valor de a;

        return 0;

    }
