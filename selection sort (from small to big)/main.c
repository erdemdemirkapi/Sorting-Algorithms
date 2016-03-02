#include <stdio.h>

//KÜÇÜKTEN BÜYÜĞE

int main()
{
    int i,j,en_kucuk_sirasi,N,gecici;

    printf("Kac sayi gireceksiniz:");
    scanf("%d",&N);

    int dizi[N];

    for(i=0; i<N; i++)
    {
        printf("%d.sayi:",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0 ; i<N ; i++){

    en_kucuk_sirasi=i;

        for(j=i+1 ; j<N ; j++)
        {
            if(dizi[j]<dizi[en_kucuk_sirasi])
                en_kucuk_sirasi=j;
        }

        gecici=dizi[i];
        dizi[i]=dizi[en_kucuk_sirasi];
        dizi[en_kucuk_sirasi]=gecici;
        }

        for(i=0; i<N; i++)
        {
            printf("%d",dizi[i]);
            printf("\n");
    }

    return 0;
}
