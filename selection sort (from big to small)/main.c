#include <stdio.h>

int main()
{
    int i,j,gecici,en_buyuk_sirasi,N;

    printf("Kac sayi gireceksiniz:");
    scanf("%d",&N);

    int dizi[N];

    for(i = 0 ; i < N ; i++){
        printf("%d. sayi:",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i = 0 ; i < N ; i++){
        en_buyuk_sirasi=i;
        for(j = i+1 ; j < N ; j++){
            if(dizi[j] > dizi[en_buyuk_sirasi])
                en_buyuk_sirasi = j;
        }

        gecici = dizi[i];
        dizi[i] = dizi[en_buyuk_sirasi];
        dizi[en_buyuk_sirasi] = gecici;
    }

    for(i = 0 ; i < N ; i++){
        printf("%d\n",dizi[i]);
    }

    return 0;
}
