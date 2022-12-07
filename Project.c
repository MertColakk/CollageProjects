//Headers Are Here
#include <stdio.h> //standart input outputlar için
#include <time.h> //srand() fonksiyonu için
#include <stdlib.h> //rand() fonksyionu için
#include <unistd.h> //Output temizlik ekranı için

//Function Prototype
int satis_doldur(int); //3 işletmenin 12 aylık satış rakamlarını rastgele  10.000-300.000 TL arasında doldur.
void en_cok_satis_ay(int,char); //En çok satış yapılan ay ekrana yazdır.
void en_cok_satis(int,int,int,int,char); //Yıllık en fazla satış yapan işletmeyi bul
int aylik_toplam_satis(int,int,int,int); //Kullanıcı tarafından girilen ay bilgisine göre işletmelerin o ayda yaptıkları toplam satış miktarını hesaplayan

//Global Veriables Are Here
char _kazanan;
int _toplam;

//Main Begins Here
int main() //Begin
{	
    srand(time(NULL)); //Sürekli farklı sayı üretimi için
    
	//Veriable Decleration
    int dessicion, is1, is2, is3,toplam=0;
    char is1Ad='X',is2Ad='Y',is3Ad='Z',kazanan;
    
	//Executable Statement
    printf("\t\t**MENU**\n"
        "1- Isletmelerin yillik satislarini goruntuleme\n"
        "2- Isletmelerin en cok satis yaptigi aylari ve satis miktarlarini goruntuleme\n"
        "3- Yillik en fazla satis yapan isletmeyi goruntuleme\n"
        "4- Ay bilgisine gore toplam satis miktari goruntuleme\n"
        "5- Cikis\n"
        "Yapmak istediginiz islemi seciniz:");
    scanf("%d", &dessicion);
    system("cls"); //Temiz output okunurluğu için output ekranı temizlenir.
    switch (dessicion)
    {
	    case 1: //Yıllık satış
	    {
	    	int i;
	        printf("Isletme Adi   1       2       3       4       5       6       7       8       9       10      11      12   \n"
	            "--------------------------------------------------------------------------------------------------------------------------------"
				"-----------------------------------------------------------------------------------\n"
				"\nXXX  ");
			for (i = 1; i <= 12; i++)
				printf("  	    %d", satis_doldur(is1)); //1. Isletme için 12 gelirin output'u.
			printf("\nYYY  ");
			for (i = 1; i <= 12; i++)
				printf("  	    %d", satis_doldur(is2)); //2. Isletme için 12 gelirin output'u.
			printf("\nZZZ  ");
			for (i = 1; i <= 12; i++)
				printf("  	    %d ", satis_doldur(is3)); //3. Isletme için 12 gelirin output'u.
	        break;
	    }
	    case 2: //İşletmelerin en çok hangi ay ve ne kadar kazandığını gösteren foksiyon
	    {
	        en_cok_satis_ay(is1,is1Ad); //1. işletmenin en çok hangi ay ve ne kadar kazandığını gösteren foksiyon
	        en_cok_satis_ay(is2,is2Ad); //2. işletmenin en çok hangi ay ve ne kadar kazandığını gösteren foksiyon
	        en_cok_satis_ay(is3,is3Ad); //3. işletmenin en çok hangi ay ve ne kadar kazandığını gösteren foksiyon
	        break;
	    }
	    case 3: //En çok satış yapan işletme ve kazancı
	    {
			en_cok_satis(is1,is2,is3,toplam,kazanan); //En çok satış yapan işletmeyi ve kazancı bulan fonksiyon
			printf("Yillik en fazla satis yapan isletme %c%c%c,\nyillik toplam %d TL satis yapmistir.",_kazanan,_kazanan,_kazanan,_toplam);
			break;
	    }
		case 4: //Belirlenen aydaki kazanç
		{
			printf("Islem yapmak istediginiz ayi seciniz:");
			scanf("%d",&dessicion);// Bulunacak ayın kararı
			printf("Isletmeler %d. ayda toplam %d TL satis yapmistir.",dessicion,aylik_toplam_satis(is1,is2,is3,dessicion));
			break;
	    }
	    case 5: //Çıkış
	    {
	    	printf("Program Sonlandiriliyor...");
	    	break; //Program bitiriş 
		}
		default: //Harici işlem
		{
			printf("Gecersiz islem.\nProgram Sonlandiriliyor...");
		}
	}
    	
    return 0; //End
}

//Function Bodys Here
int satis_doldur(int isletme) //Rastgele Sayı Üretici
{
	isletme = rand() % 290000 + 10000; //10.000 ile 300.000 arası sayı üretimi.
    return isletme; //Geridönüşlü fonksiyon
}

void en_cok_satis_ay(int isletme,char isletmeAd) // En çok satış yapılan ay fonksiyonu
{
	//Veriables for fnc
	int ay,buyuk,i;
	
	//Executable
	buyuk=isletme;
	for(i=1;i<=12;i++)
	{
		isletme=satis_doldur(isletme); //Rastgele sayı üretimi için olan fonksiyon çağırılır.
		if(isletme>buyuk) //En fazla gelir kontrolü ile en fazla olan gelir ile hangi ay olduğu bulunur.
		{
			buyuk=isletme;
			ay=i;
		}
	}
	printf("Isletmelerin en cok satis yaptigi aylar:\n"
	"%c%c%c isletmesi en cok %d. ayda %d TL satis yapmistir.\n",isletmeAd,isletmeAd,isletmeAd,ay,buyuk); //Fonksiyon işlem outputu.
}

void en_cok_satis(int isletme1,int isletme2,int isletme3,int toplam,char kazanan) //En çok satış yapan şirket ve toplamını bulan fonksiyon
{
	//Veriables for fnc
	int toplam1=0,toplam2=0,toplam3=0,i;
	
	//Executable
	for(i=1;i<=12;i++)
	{
		isletme1=satis_doldur(isletme1);//Gelir üretimi
		toplam1=toplam1+isletme1;//Toplam Gelir hesabı
		_toplam = toplam1; //Verilerin kaybını önlemek için global _toplam atanır.
	}
	
	for(i=1;i<=12;i++)
	{
		isletme2=satis_doldur(isletme2);//Gelir üretimi
		toplam2=toplam2+isletme2;//Toplam Gelir hesabı
		_toplam = toplam2; //Verilerin kaybını önlemek için global _toplam atanır.
	}
	
	for(i=1;i<=12;i++)
	{
		isletme3=satis_doldur(isletme3);//Gelir üretimi
		toplam3=toplam3+isletme3;//Toplam Gelir hesabı
		_toplam = toplam3; //Verilerin kaybını önlemek için global _toplam atanır.
	}
	
	if(toplam1>toplam2&&toplam1>toplam3) //1.İşletme için gelir kontrolü
	{
		toplam=toplam1; //En yüksek toplam tutucu
		_toplam = toplam; // global _toplam
		kazanan='X';
	}
	
	else if(toplam2>toplam1&&toplam2>toplam3) //2.İşletme için gelir kontrolü
	{
		toplam=toplam2;	//En yüksek toplam tutucu
		_toplam = toplam; // global _toplam
		kazanan='Y';
	}	
	
	else //3.İşletme için gelir kontrolü
	{
		toplam=toplam3; //En yüksek toplam tutucu
		_toplam = toplam;// global _toplam
		kazanan='Z';
	}
	_kazanan = kazanan; // global _kazanan 
}

int aylik_toplam_satis(int isletme1,int isletme2,int isletme3,int karar) //Bütün firmaların belirlenen aydaki toplam gelirini bulan fonksiyom
{
	//Veriables for fnc
	int cikanAy=0,toplam=0,toplam1,toplam2,toplam3,tutucu;
	
	//Executable
	for(int i=1;i<=karar;i++)
	{
		isletme1=satis_doldur(isletme1); //Random gelir üretimi 1 için
		toplam=isletme1+toplam; //Toplam gelir bulunur
		cikanAy=cikanAy+toplam; //Cıkartılacak ay bulunur
		if(i==karar-1) //Sadece karar verilen ayı bulmak için kontrol
			tutucu=cikanAy; //Karar verilen aydan önceki aya kadar olan toplam
	}
	toplam1=toplam-tutucu; //2. İşletme için belirlenen aydaki gelirin hesaplanması
	tutucu=0,cikanAy=0,toplam=0; //Aynı fonksiyon içinde olunduğu için değerler sıfırlanır
	
	for(int i=1;i<=karar;i++)
	{
		isletme2=satis_doldur(isletme2); //Random gelir üretimi 2 için
		toplam=isletme2+toplam; //Toplam gelir bulunur
		cikanAy=cikanAy+toplam; //Cıkartılacak ay bulunur
		if(i==karar-1) //Sadece karar verilen ayı bulmak için kontrol
			tutucu=cikanAy; //Karar verilen aydan önceki aya kadar olan toplam
	}
	toplam2=toplam-tutucu; //2. İşletme için belirlenen aydaki gelirin hesaplanması
	tutucu=0,cikanAy=0,toplam=0; //Aynı fonksiyon içinde olunduğu için değerler sıfırlanır
	
	for(int i=1;i<=karar;i++)
	{
		isletme3=satis_doldur(isletme3); //Random gelir üretimi 3 için
		toplam=isletme3+toplam; //Toplam gelir bulunur
		cikanAy=cikanAy+toplam; //Cıkartılacak ay bulunur
		if(i==karar-1) //Sadece karar verilen ayı bulmak için kontrol
			tutucu=cikanAy; //Karar verilen aydan önceki aya kadar olan toplam
	}
	toplam3=toplam-tutucu; //3. İşletme için belirlenen aydaki gelirin hesaplanması
	toplam1=toplam1+toplam2+toplam3; //Genel toplam bulunması
	
	return toplam1;
}