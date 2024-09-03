//3. Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa deve imprimir a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    void removeVogais(char *str){
        int i, j = 0;
        for(int i = 0; str[i] != '\0'; i++){
            if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
                str[j] = str[i];
                j++;
            }
        }
        str[j] != '\0'; // finalizar a string modificada;
    }


    int main(){
        int tamanho;
        printf("Digite o tamanho da string: ");


    }