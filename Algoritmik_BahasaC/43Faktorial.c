/*#include <stdio.h>
#include <stdlib.h>

void faktorial (int N){
    // Kamus
    int a;
    int sumFaktorial;

    // Algoritma
    sumFaktorial = 1;
    for(a=1; a<=N; a++){
        sumFaktorial = sumFaktorial*a;
    }
    printf("\nFaktorial(%d): %d\n",N,sumFaktorial);
}

int main(){
    // Kamus
    int N;

    // Algoritma
    printf("Menghitung Faktorial\n");
    printf("Masukkan N: "); scanf("%d",&N);

    faktorial(N);

    return 0;
}


/*#include <stdio.h>

int main()
{
    // Kamus
    int i, N;
    float kali;

    // Algoritma
    printf("Menghitung Faktorial\n");
    printf("Masukkan N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        printf("%d ", i);
        kali = kali*i;
        }

    printf("\nHasil: %0.1f",kali);
    return 0;
}
*/
