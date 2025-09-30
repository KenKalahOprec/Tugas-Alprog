#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int N;
    scanf("%d", &N);

    int X[N];
    long long total = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        total += X[i];
    }

    // Cari nilai maksimum
    int maxVal = X[0];
    for (int i = 1; i < N; i++) {
        if (X[i] > maxVal) {
            maxVal = X[i];
        }
    }

    // Hitung berapa kali max muncul dan simpan hari ke-
    int count = 0;
    int days[N]; 
    for (int i = 0; i < N; i++) {
        if (X[i] == maxVal) {
            days[count] = i + 1; // +1 karena hari mulai dari 1
            count++;
        }
    }

    // Hitung persentase
    double percentage = ((double)maxVal * count / total) * 100.0;

    // Hasil
    printf("Max : %d\n", maxVal);
    printf("Count : %d\n", count);

    printf("days : ");
    for (int i = 0; i < count; i++) {
        if (i > 0) printf(" ");
        printf("%d", days[i]);
    }
    printf("\n");

    printf("Percentage : %.3f%%\n", percentage);

    return 0;
}
