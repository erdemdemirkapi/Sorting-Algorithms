#include <stdio.h>

int main()
{
    int i,j,gecici,N;

    printf("kac sayi gireceksiniz:");
    scanf("%d",&N);

    int dizi[N];

    for(i = 0 ; i < N ; i++){
        printf("%d. sayi:",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i = 0 ; i < N ; i++){
        for(j = 0 ; j < N ;j++){
            if(dizi[j] > dizi[j+1]){
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    for(i = 0 ; i < N ; i++){
        printf("%d\n",dizi[i]);
    }

    return 0;
}
