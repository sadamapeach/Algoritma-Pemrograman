#include <stdio.h>
#include "sequential.h"

void SEQSearchX1(int T[], int N, int *IX, int X){
    // Kamus Lokal
    int i;

    // Algoritma
    i = 0;
    while(i<N && T[i]!=X){
        i++;
    }
    if(T[i] == X){
        *IX = i;
    }else{
        *IX = -1;
    }
}
