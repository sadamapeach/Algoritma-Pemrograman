/*#include <stdio.h>

int main(){
    // Kamus
    int b,k;
    int i,j;

    // Algoritma
    printf("MATRIKS\n");
    printf("Masukkan banyak baris: "); scanf("%d",&b);
    printf("Masukkan banyak kolom: "); scanf("%d",&k);

    if (b<=0 || k<=0){
        printf("Baris dan kolom harus positif");
    }
    else if (b != k){
        printf("Nilai baris dan kolom harus sama");
    }
    else{
        for(i=1; i<=b; i++){
            for(j=1; j<=k; j++){
                if (i != j){
                    if (i>j){
                        printf(" 2 ");
                    }
                    else{
                        printf(" 0 ");
                    }
                }else{
                    printf(" 1 ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
*/
