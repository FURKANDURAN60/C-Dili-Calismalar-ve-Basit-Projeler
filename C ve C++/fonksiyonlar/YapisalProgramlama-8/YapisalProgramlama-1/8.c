//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
// ******* Bir oncekinden Farklar *******
//Fonksiyonlarin her biri Ayri bir Sayfaya Aliniyor ve Header dosyasi uzerinden birlesitiriliyor
//Fonksiyondan gelenler dorudan yazdiriliyor

#include "Header.h"


float main() {
	float sayi1, sayi2;
	float toplam = 0, fark = 0, carpim = 0;

	printf("\t ******* Hesaplanacak Verilerin Girilmesi ******");
	printf("\n Klavyeden 1. Sayiyi giriniz: ");
	scanf("%f", &sayi1);
	printf("\n Klavyeden 2. Sayiyi giriniz: ");
	scanf("%f", &sayi2);

	printf(" \t****Islemlerin Sonucu****\n");
	printf("Sayilarin Toplami:%0.00f", topla(sayi1, sayi2));
	printf("\nSayilarin Farki:%0.00f", cikar(sayi1, sayi2));
	printf("\nSayilarin Carpimi:%0.00f", carpma(sayi1, sayi2));

	printf("\n \t ******* Sayfayi Kapatmak icin Herhangi Bir Tusa Basiniz ******\n");

	getchar();
	getchar();
	return 0;
}