/*#include <stdio.h>

int main()
{
    // Kamus
    int i, N, s;

    // Algoritma
    printf("Menentukan Bilangan Prima");

    printf("\nMasukkan N: ");
    scanf("%d", &N);

    if(N<2)
        printf("Masukkan angka lebih dari 1");
    else
        if(N==2){
            printf("%d merupakan bilangan prima", N);
        }
        else{
            for(i=2; i < N; i++){
                if(N%i == 0){
                    s = 0; // False
                    break;
                }else{
                    s = 1; // True
                }
            }
        }
        if(s == 0){
            printf("%d bukan merupakan bilangan prima\n", N);
        }
        else{
            printf("%d merupakan bilangan prima\n", N);
        }

    return 0;
}

// Cara praktikum 1
int i, N, check;

i=2;
check=1; // True
printf("Masukkan N: ");
scanf("%d", &N);

while(check && i<N){
    if(N%i==0){
        check--;
    }
    i++;
}

(check) ? printf("%d bilangan prima.\n", N) :
printf("%d bukan bilangan prima.\n", N);

return 0;
}
*/
