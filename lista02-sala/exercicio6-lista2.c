<<<<<<< HEAD
//6. Crie o Struct funcionario que contém o nome e o salário do funcionário. Declare uma variável do tipo funcionario e faça um ponteiro para ele. Adicione e imprima as informações do funcionário que você acabou de declarar usando apenas o ponteiro.

#include <stdio.h>
    struct funcionario
    {
        float salario;
        char nome[50];
    };
    
    int main(){
        //criando uma variável do tipo funcionario
        struct funcionario func_1;

        // strcpy(func_1.nome, "Victor Monteiro"); // Usando strcpy para copiar a string para o array de caracteres 'nome'
        // func_1.salario = 5000.00;

        // strcpy(ptr->nome, "Victor Monteiro");
        // ptr->salario = 5000.00;

        //ponnteiro desse struct
        struct funcionario *ptr_func1 = NULL;
        ptr_func1 = &func_1;

        printf("Digite seu nome: ");
        scanf("%s", ptr_func1->nome);
        //printf("%s", ptr_func1->nome);

        printf("Digite seu salario: ");
        scanf("%f", &ptr_func1->salario);

        printf("\n");

        //Metodo tradicional
        // printf("Seu nome eh: %s\n", (*ptr_func1).nome);
        // printf("Seu salario eh: %.2f\n", (*ptr_func1).salario);

        //metodo otimizado
        printf("Seu nome eh: %s\n", ptr_func1->nome);
        printf("Seu salario eh: %.2f\n", ptr_func1->salario);

        return 0;
    }
=======
//6. Crie o Struct funcionario que contém o nome e o salário do funcionário. Declare uma variável do tipo funcionario e faça um ponteiro para ele. Adicione e imprima as informações do funcionário que você acabou de declarar usando apenas o ponteiro.
>>>>>>> 186293c7a32609b2cb84f694007fb8c7c88cf4ec
