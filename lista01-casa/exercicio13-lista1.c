#include <stdio.h>

// Função para verificar se a substring ocorre dentro da string principal
int verificaSubstring(const char *str, const char *substr) {
    const char *p1, *p2, *p3;
    
    if (*substr == '\0') {
        return 1; // A substring vazia sempre ocorre
    }
    
    while (*str != '\0') {
        p1 = str;
        p2 = substr;
        
        // Verifica se a substring começa na posição atual de str
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        
        // Se chegamos ao fim da substring, então encontramos uma ocorrência
        if (*p2 == '\0') {
            return 1;
        }
        
        str++;
    }
    
    return 0;
}

int main() {
    char str[100], substr[100];
    
    // Leitura das strings
    printf("Digite a string principal: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Digite a substring: ");
    fgets(substr, sizeof(substr), stdin);
    
    // Remove o caractere de nova linha que fgets pode deixar no final
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    if (substr[strlen(substr) - 1] == '\n') {
        substr[strlen(substr) - 1] = '\0';
    }
    
    // Verifica se a substring ocorre dentro da string principal
    if (verificaSubstring(str, substr)) {
        printf("A substring \"%s\" ocorre dentro da string principal \"%s\".\n", substr, str);
    } else {
        printf("A substring \"%s\" nao ocorre dentro da string principal \"%s\".\n", substr, str);
    }
    
    return 0;
}
