/*#include <stdio.h>

int main()
{
    // Kamus
    int N;
    int i, j, k;
    int KPK;
    int array[1000];

    // Algoritma
    printf("Menentukan kelipatan bilangan terkecil\n");
    printf("Masukkan panjang array : ");
    scanf("%d",&N);

    if(N<=0){
      printf("Masukkan harus positif");
    }else{
        for(i=0; i<N; i++){
            printf("Data ke %d : ", i+1);
            scanf("%d", &array[i]);
        }

        for (j=1; j<=KPK; j++){
            for(k=0; k<N; k++){
                if(j%array[k] != 0){
                    break;
                }
            }
            if(k>N-1){
                break;
            }
        }
        printf("Kelipatan bilangan adalah %d", j);
  }

  return 0;
}
*/
