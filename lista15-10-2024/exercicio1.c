#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 40

typedef struct {
    char nome[100];
    float notas[3];
    int frequencia;
    float media;
    char status[10];
} Aluno;

float calcular_media(float notas[3]) {
    return (notas[0] + notas[1] + notas[2]) / 3.0;
}

char* definir_status(float media, int frequencia) {
    if (media >= 60 && frequencia >= 75) {
        return "Aprovado";
    } else {
        return "Reprovado";
    }
}

int main() {
    Aluno alunos[MAX_ALUNOS];
    float soma_media = 0, media_turma;
    float maior_nota = 0, menor_nota = 100;

    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", alunos[i].nome);
        
        printf("Digite as 3 notas do aluno %d: ", i+1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &alunos[i].notas[j]);
        }

        printf("Digite a frequencia do aluno %d: ", i+1);
        scanf("%d", &alunos[i].frequencia);

        alunos[i].media = calcular_media(alunos[i].notas);
        
        strcpy(alunos[i].status, definir_status(alunos[i].media, alunos[i].frequencia));
        
        soma_media += alunos[i].media;

        if (alunos[i].media >= 60) {
            for (int j = 0; j < 3; j++) {
                if (alunos[i].notas[j] > maior_nota) maior_nota = alunos[i].notas[j];
                if (alunos[i].notas[j] < menor_nota) menor_nota = alunos[i].notas[j];
            }
        }
    }

    media_turma = soma_media / MAX_ALUNOS;

    printf("\nResultado!\n");
    for(int i = 0; i < MAX_ALUNOS; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Media Final: %.2f\n", alunos[i].media);
        printf("Frequencia: %d\n", alunos[i].frequencia);
        printf("Status: %s\n\n", alunos[i].status);
    }

    printf("Maior nota dos alunos com nota acima da media: %.2f\n", maior_nota);
    printf("Menor nota dos alunos com nota acima da media: %.2f\n", menor_nota);

    return 0;
    
}
