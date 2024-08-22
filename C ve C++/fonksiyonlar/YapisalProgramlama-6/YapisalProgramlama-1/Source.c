//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
// ******* Bir oncekinden Farklar *******
//Fonksiyonlar Ayri bir Sayfaya Aliniyor ve Header dosyasi uzerinden birlesitiriliyor

#include "Header.h"


float main() {
	float sayi1, sayi2;
	float toplam = 0, fark = 0, carpim = 0;

	printf("\t ******* Hesaplanacak Verilerin Girilmesi ******");
	printf("\n Klavyeden 1. Sayiyi giriniz: ");
	scanf("%f", &sayi1);
	printf("\n Klavyeden 2. Sayiyi giriniz: ");
	scanf("%f", &sayi2);

	toplam = topla(sayi1, sayi2);
	fark = cikar(sayi1, sayi2);
	carpim = carpma(sayi1, sayi2);

	printf(" \t****Islemlerin Sonucu****\n");
	printf("Sayilarin Toplami:%0.00f", toplam);
	printf("\nSayilarin Farki:%0.00f", fark);
	printf("\nSayilarin Carpimi:%0.00f", carpim);

	printf("\n \t ******* Sayfayi Kapatmak icin Herhangi Bir Tusa Basiniz ******\n");

	getchar();
	getchar();
	return 0;
}