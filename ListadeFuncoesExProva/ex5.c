// 05 - Desenvolva um programa principal (main) que deverá ler o dia, mês e ano. Faça
// uma função receba esses valores e retorne se os valores fornecidos formam uma
// data válida. Se for válida, faça uma outra função que recebe esta data também e
// imprime a data como ilustrado a seguir: Entrada: 27/08/2023 Saída: 27 de agosto
// de 2023.

#include <stdio.h>
#include <stdbool.h>

bool validarData(int dia, int mes, int ano) {
    if (ano < 1 || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        return false;
    }


    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return false;
    }

    if (mes == 2) {
        bool anoBissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        if (dia > (anoBissexto ? 29 : 28)) {
            return false;
        }
    }

    return true;
}
void exibirData(int dia, int mes, int ano) {
    const char *nomesMeses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    printf("Entrada: %02d/%02d/%04d\n", dia, mes, ano);
    printf("Saida: %d de %s de %d\n", dia, nomesMeses[mes - 1], ano);
}

int main() {
    int dia, mes, ano;

    printf("Digite o dia, mes e ano (DD MM AAAA): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (validarData(dia, mes, ano)) {
        exibirData(dia, mes, ano);
    } else {
        printf("Data invalida. Tente novamente.\n");
    }

    return 0;
}
