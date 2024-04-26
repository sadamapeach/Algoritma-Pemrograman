/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Deskripsi   : Searching dengan metode sequential tanpa boolean.
*/

#include <stdio.h>
#include <stdlib.h>
#include "sequential.h"

int main()
{
    // Kamus
    int arr[] = { 1, 3, 5 , -8, 12, 90, 3, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;
    int x;

    // Algoritma
    printf("Sequential seaching tanpa menggunakan boolean...\n\n");

    printf("Masukkan nilai input: ");
    scanf("%d",&x);

    SEQSearchX1(arr, n, &ix, x);
    (ix == -1)
        ? printf("Elemen tidak ditemukan\n")
        : printf("Elemen ditemukan pada index ke-%d\n", ix);

    return 0;
}
