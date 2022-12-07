#include <stdio.h>

int main()
{
    //Veriable Decleration
    int sonuclar[20],gecenler=0;
    float sonuc=0;
    
    //Executable Statement
    printf("Lütfen 20 adet notu giriniz:\n"); // Kullanıcıya bilgi kısmı.
    for (int i = 0; i <20; i++)
    {
        printf("%d. not: ",i+1); //Kullanıcıya kaçıncı notta olduğunun bilgilendirmesi.
        scanf("%d",&sonuclar[i]); //Kullanıcıdan notun alınması.
        sonuc=sonuc+sonuclar[i]; //Sınıfın toplam notunun bulunması.
    }
    sonuc=sonuc/20; //Ekstra bir değişken ekleyip verimliliği azaltmamak için aynı değişken ile ortalama hesabı.
    printf("Sınıfın ortalaması %.2f'dir.\n",sonuc); //Sınıf ortalamasının yazdırılması
    printf("Gecenler şunlardır:\n"); 
    for (int i = 0; i < 20; i++)
    {
        if (sonuclar[i]>sonuc) //Sonuçların ortalamadan büyük olup olmadığının belirlenmesi
        {
            gecenler++; //Geçen kişi sayısını belirlemek için sayaç.
            printf("%d\n",sonuclar[i]); //Geçen notların yazdırılması
        }
        
    }
    printf("Toplamda %d kişi geçmiştir.",gecenler); //Geçen kişilerin toplam sayısı.
    
    return 0;
}