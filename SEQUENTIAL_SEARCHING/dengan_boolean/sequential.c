#include <stdio.h>
#include <stdbool.h>
#include "sequential.h"

void SEQSearchX2(int T[], int N, int X, int *IX, bool *Found){
    // Kamus Lokal
    int i;

    // Algoritma
    *Found = false;
    i = 0;

    while(i<N && !*Found){
        if(T[i] == X){
            *Found = true;
        }else{
            i++;
        }
    }
    if(*Found){
        *IX = i;
    }else{
        *IX = -1;
    }
}
