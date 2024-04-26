/*#include <stdio.h>

int main(){
    // Kamus
    int N;
    int i,j;
    float yes, no;
    int array[1000];

    // Algoritma
    printf("Menentukan status persaudaraan kambing dari kumpulan DNAnya");
    printf("\nMasukkan banyak kambing: "); scanf("%d",&N);

    if (N<=0){
        printf("Input harus positif.");
    }
    else{
        for(i=0; i<N; i++){
            printf("DNA kambing %d: ", i+1);
            scanf("%d",&array[i]);
        }
        for (i=0; i<N; i++){
            for (j=i+1; j<N; j++){
                if(array[j]-array[i] < 3){
                    yes++;
                }
                else{
                    no++;
                }
            }
        }
    }

    printf("\nBersaudara: %0.1f kambing",yes);
    printf("\nTidak bersaudara: %0.1f kambing",no);
}
*/
