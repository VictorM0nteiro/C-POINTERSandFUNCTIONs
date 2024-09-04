//3. Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa deve imprimir a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    void removeVogais(char *str){
        int i, j = 0;
        for(int i = 0; str[i] != '\0'; i++){
            if(strchr("aeiouAEIOU", str[i]) == NULL){//A função strchr foi utilizada para verificar se o caractere atual é uma vogal, simplificando a lógica de remoção de vogais.
                str[j] = str[i];
                j++;
            }
        }
        str[j] = '\0'; // finalizar a string mod, tem que ser = se for != da erro
    }


    int main(){
        int tamanho;
        char *string;
        int *pont_tamanho;
        pont_tamanho = &tamanho;

        printf("Digite o tamanho da string: ");
        scanf("%d", pont_tamanho);
        getchar(); // limpar o buffer de teclado

        // para alocar a string
        string = (char *)malloc((*pont_tamanho+1) * sizeof(char));
        if(string == NULL){
            printf("Erro ao alocar memória!\n");
            return 1;
        }

        //recebe o conteudo da string
        printf("Digite a string: ");
        scanf(" %[^\n]s", string);

        removeVogais(string);
        printf("String sem vogais: %s\n", string);

        free(string);

        return 0;

        
    }