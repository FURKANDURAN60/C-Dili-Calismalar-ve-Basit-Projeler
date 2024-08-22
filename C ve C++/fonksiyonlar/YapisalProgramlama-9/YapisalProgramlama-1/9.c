//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
// ******* Bir oncekinden Farklar *******
//Yazma islemi farkli sayfaya aliniyor
#include <stdio.h>
#include <stdlib.h>
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
	yazdir(sayi1, sayi2);

	printf("\n \t ******* Sayfayi Kapatmak icin Herhangi Bir Tusa Basiniz ******\n");

	
	getchar();
	return 0;
}