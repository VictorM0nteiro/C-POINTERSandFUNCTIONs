#include <stdio.h>

int main(){
    int matriz[6][4];
    int n_matriz[6][4];
    int contar_maiores_30 = 0;

    for( int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite o elemento [%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j]>30){
                contar_maiores_30++;
            }

            if(matriz[i][j]==30){
                n_matriz[i][j]=0;
            }
            else n_matriz[i][j]=matriz[i][j];
        }
    }

    printf("Quantidade de elementos maiores que 30: %d\n", contar_maiores_30);

    printf("\nNova matriz com os 30 substituidos\n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", n_matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}