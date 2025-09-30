#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
   int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    // Cetak daun (baris 1 sampai N-1)
    for (int i = 1; i < N; i++) {
        for (int s = 0; s < N - i - 1; s++) {
            putchar(' ');
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            putchar('*');
        }
        putchar('\n');
    }
    for (int s = 0; s < N - 2; s++) putchar(' ');
    putchar('*');
    putchar('\n');

    return 0;
}