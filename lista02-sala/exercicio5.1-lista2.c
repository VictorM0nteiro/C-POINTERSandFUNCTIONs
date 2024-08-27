//5. Faça um código que ordene um array de valores inteiros (que foram inseridos pelo usuário) de tamanho 10. No código você deve usar um ponteiro par manipular o array. Sempre que precisar trocar valores de lugar, deve-se usar um ponteiro também.

#include <stdio.h>

// void trocarValores(int *a, int *b) {
//     // int temp = *a;
//     // *a = *b;
//     // *b = temp;

//     int temp;
//     int *p_temp = NULL;
//     p_temp = &temp;

//     *p_temp = *a;
//     *a = *b;
//     *b = temp;
// }

void sortArray(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                *(arr + j) = *(arr + j) + *(arr + j + 1); // a = a + b: // a(12) b(7)
                *(arr + j + 1) = *(arr + j) - *(arr + j + 1); // b = a - b; a(12) b(5)
                *(arr + j) = *(arr + j) - *(arr + j + 1); // a = a - b; a(7) b(5)
            }
        }
    }
}

int main() {
    int arr[10];

    printf("Insira 10 valores inteiros:\n");
    for(int i = 0; i < 10; i++) {
        printf("Valor %d: ", i);
        scanf("%d", arr + i);
    }

    sortArray(arr, 10);

    printf("Array ordenado:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}