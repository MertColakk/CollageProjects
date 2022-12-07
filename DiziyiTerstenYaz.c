#include <stdio.h>

int main()
{
    printf("Lutfen 5 adet sayı giriniz.\n"); //Kullanıcıya bilgi verilir.
    int sayilar[5]={}; //Dizi tanımlama
    for (int i = 0; i < 5; i++)
        scanf("%d",&sayilar[i]); //Döngü ile Dizi için kullanıcıdan sayı alınır
    printf("Girdiğiniz sayıların tersi:"); //Kullanıcıya bilgi verilir.
    for (int i = 4; i >= 0; i--) //Ters döngü ile alınan değerler geri yazılır.
        printf(" %d ",sayilar[i]);
    return 0;
}
