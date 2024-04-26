/*#include<stdio.h>

int main()
{
    // Kamus
    int i, j;
    int N;
    int a;

    // Algoritma
    printf("Menampilkan Deret Prima Pada Layar\n");
    printf("Masukkan N: ");
    scanf("%d",&N);

    printf("\nMaka deret primanya adalah :\n");
    for(i=2; i<=N; i++)
    {
        if(i==2)
        {
        printf("%d ", i);
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
                printf("%d ", i);
            }
            else {
                printf("");
            }
        }
    }
    printf("\n\n");
    return 0;
}
*/
