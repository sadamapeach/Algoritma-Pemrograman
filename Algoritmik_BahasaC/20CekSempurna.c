/*#include <stdio.h>

int main()
{
    // Kamus
    int i, N;
    float sum;

    // Algoritma
    printf("Menentukan Bilangan Sempurna");

    printf("\nMasukkan N: ");
    scanf("%d", &N);

    if(N<0)
        printf("Masukkan angka lebih dari 0");
    else
        for(i=1; i <= N; i++){
            if(N%i == 0){
                sum += i; // Fungsi pertambahan
            }
        }

    printf("%f\n", sum);

    if((sum - N) == N){
        printf("%d merupakan bilangan sempurna\n", N);
    }
    else{
        printf("%d bukan merupakan bilangan sempurna\n", N);
    }

    return 0;
}
*/
