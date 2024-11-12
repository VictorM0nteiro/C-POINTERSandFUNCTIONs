// 11 - Crie uma função que receba dois nomes e retorne quantas letras são vogais. Use uma
// outra função que verifica se é uma vogal.
#include <stdio.h>
#include <ctype.h>

// Função que verifica se um caractere é uma vogal
int ehVogal(char c) {
    c = tolower(c); // Converter para minúscula para simplificar a comparação
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Função que conta o número de vogais em dois nomes
int contarVogais(char *nome1, char *nome2) {
    int contador = 0;
    
    // Contar vogais no primeiro nome
    for (int i = 0; nome1[i] != '\0'; i++) {
        if (ehVogal(nome1[i])) {
            contador++;
        }
    }

    // Contar vogais no segundo nome
    for (int i = 0; nome2[i] != '\0'; i++) {
        if (ehVogal(nome2[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char nome1[50], nome2[50];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    int totalVogais = contarVogais(nome1, nome2);
    printf("Total de vogais nos dois nomes: %d\n", totalVogais);

    return 0;
}
