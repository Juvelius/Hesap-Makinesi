#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>



int main()
{
    int sayi1, sayi2, toplam, carpma, cikarma, bolme;
    char karar;
    label:
    system("CLS");
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("İkinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);


    toplam = sayi1 + sayi2;
    carpma = sayi1 * sayi2;
    cikarma = sayi1 - sayi2;
    bolme = sayi1 / sayi2;
    printf("Girdiginiz Sayilarin Toplami: %d\n", toplam);
    printf("Girdiginiz Sayilarin Carpimi: %d\n", carpma);
    printf("Girdiginiz Sayilarin Farki: %d\n", cikarma);
    printf("Girdiginiz Sayilarin Bolumu: %d\n", bolme);

    printf("Tekrar islem yapmak ister misiniz?(Evet ise 'e' tusuna bas, Hayir ise 'h' tusuna bas): ");
    scanf(" %c", &karar);
    if (karar == 'E' || karar == 'e')
    {
        goto label;
    }
    else
    {
        return 0;
    }
    return 0;
}
