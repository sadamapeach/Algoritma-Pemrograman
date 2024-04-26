/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Deskripsi   : Searching dengan metode sequential menggunakan boolean.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sequential.h"

int main()
{
    // Kamus
    int arr[] = { 1, 3, 5 , -8, 12, 90, 3, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;
    int x;
    bool found;

    // Algoritma
    printf("Sequential seaching menggunakan boolean...\n\n");

    printf("Masukkan nilai input: ");
    scanf("%d",&x);

    SEQSearchX2(arr, n, x, &ix, &found);
    (!found)
        ? printf("Elemen tidak ditemukan\n")
        : printf("Elemen ditemukan pada index ke-%d\n", ix);

    return 0;
}
