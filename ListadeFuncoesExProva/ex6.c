// normal 06 - Faça um programa que leia a quantidade total de segundos e envia para uma
//função, nesta função converta para Horas, Minutos e Segundos e retorne para o
//programa principal imprimir o resultado da conversão no formato HH:MM:SS.

#include <stdio.h>
    int converter_horas(int segundos);
    int main(){
        int seg;
        scanf("%d", &seg);
        converter_horas(seg);
 
        return 0;
    }
 
    int converter_horas(int total_segundos){
        int horas = 0;
        int minutos  = 0;
        int segundos = 0;
 
        horas = total_segundos/3600;
        total_segundos = total_segundos % 3600;
 
        minutos = total_segundos/60;
        segundos = total_segundos%60;
 
        printf("Convertido: %02d:%02d:%02d\n", horas, minutos, segundos);
    }
