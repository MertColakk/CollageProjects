#include <stdio.h>

int main()
{
    printf("Lutfen 5 adet sayı giriniz.\n");
    int sayilar[5]={};
    for (int i = 0; i < 5; i++)
        scanf("%d",&sayilar[i]);
    printf("Girdiğiniz sayıların tersi:");
    for (int i = 4; i >= 0; i--)
        printf(" %d ",sayilar[i]);
    
    



    return 0;
}