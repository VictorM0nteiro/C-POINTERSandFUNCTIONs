// 03 - Faça um programa que calcule a pontuação de dois times após uma partida de
// futebol. Na função principal leia dois números inteiros que correspondem ao
// número de pontos dos dois times antes do jogo. Depois leia dois inteiros que
// representam o número de gols que cada time fez na partida. Você deverá fazer
// uma função separada que receba os pontos dos dois times por referência e os
// atualize de acordo com o resultado. Em caso de vitória são somados 3 pontos, em
// caso de empate é somado um ponto, e em caso de derrota, nenhum ponto é somad

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ClacularPontos(int gols1, int gols2, int *pontos1, int*pontos2){
    if(gols1 > gols2){
        *pontos1 += 3;
        *pontos2 += 0;
    }
    else if( gols2 > gols1){
        *pontos2 += 3;
        *pontos1 += 0;
    }
    else if(gols1 == gols2){
        *pontos1+=1;
        *pontos2+=1;
    }
}

int main(){
    int pontos1, pontos2;
    printf("Digite os pontos do time 1 e time 2 antes do jogo:");
    scanf("%d %d", &pontos1, &pontos2);

    int gols1, gols2;
    printf("Digite os gols de cada time na partida:");
    scanf("%d %d", &gols1, &gols2);

    ClacularPontos(gols1, gols2, &pontos1, &pontos2);

    printf("Pontos atualizados\n");
    printf("Pontos time 1: %d\n", pontos1);
    printf("Pontos time 2: %d\n", pontos2);
 
        return 0;

}