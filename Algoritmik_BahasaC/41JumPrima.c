/*#include<stdio.h>

int main()
{
    // Kamus
    int i, j;
    int N;
    int a;
    float sum;

    // Algoritma
    printf("Mencetak hasil penjumlahan deret bilangan prima\n");
    printf("Masukkan N: ");
    scanf("%d",&N);

    for(i=2; i<=N; i++)
    {
        if(i==2)
        {
        sum += i;
        }else{
            for(j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    a=1;
                    break;
                }else{
                a=0;
                }

            }
            if(a==0)
            {
                sum += i;
            }
            else {
                printf("");
            }
        }
    }
    printf("\nPenjumlahan deret prima: %0.1f",sum);
    printf("\n\n");
    return 0;
}
*/
