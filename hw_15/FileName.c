#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define N 10

int main() {
    setlocale(LC_CTYPE, "RUS");
    int A[N];
    printf("Введите %d целых чисел:\n", N);
    for (int i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    int min_val = A[0];
    int min_idx = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] < min_val) {
            min_val = A[i];
            min_idx = i;
        }
    }
    printf("\nМинимальный элемент массива: %d (индекс %d)\n", min_val, min_idx);
    printf("Количество элементов до минимального: %d\n", min_idx);
    return 0;
}