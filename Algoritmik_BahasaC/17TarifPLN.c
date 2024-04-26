/*#include <stdio.h>
int main()
{
    // Kamus
    int i;
    int d;

    // Algoritma
    printf("Menghitung Tarif PLN");
    printf("\nMasukkan golongan = ");
    scanf("%d",&i);

    printf("Masukkan pemakaian daya listrik (kWh) = ");
    scanf("%d",&d);

    if (i==1)
        if (d<100)
            return 100000;
        else if ((100<=d) && (d< 1000))
            return d*1000;
        else //(d>=1000)
            return (d*1000) + (0.1*(d*1000));

    else if (i==2)
        if (d<100)
            return 200000;
        else if ((100<=d) && (d<1000))
            return d*2000;
        else // d >= 1000
            return (d*2000) + (0.1*(d*2000));

    else
        printf("Golongan yang anda masukkan salah");


    return 0;
}*/
