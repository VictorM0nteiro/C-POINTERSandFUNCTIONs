//Crie um Struct chamado aluno. Faça uma matriz 3x3 do tipo aluno. Adicione valores à matriz. Usando um ponteiro percorra a matriz e imprima seu conteúdo.

#include <stdio.h>
    struct aluno
    {
        int matricula;
        char nome[50];
    };

    int main(){
        struct aluno matriz[3][3] = {
            {{101, "Rand1"}, {202, "Rand2"}, {303, "Rand3"}}, 
            {{404, "Rand4"}, {505, "Rand5"}, {606, "Rand6"}}, 
            {{707, "Rand7"}, {808, "Rand8"}, {909, "Rand9"}}
            
        };

        //struct aluno (*ptr)[3] = &matriz; //initialization from incompatible pointer type ?????????

        struct aluno (*ptr)[3] = matriz;

        for(int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                printf("Matricula: %d, nome: %s\n", ptr[i][j].matricula, ptr[i][j].nome); // não utilizar o "*"
            }
            if(i != 2){
                printf("\n"); // só quero espaço entre as linhas, na ultima não precisa
            }
        }

        return 0;
    }
    
