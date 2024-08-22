//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
// ******* Bir oncekinden Farklar *******
//Fonksiyonlar Header Dosyasina Tasiniyor
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

float topla(float x, float y) {
	float toplama;
	toplama = x + y;
	return (toplama);
}

float cikar(float a, float b) {
	float cikarma;
	cikarma = a - b;
	return (cikarma);
}

float carpma(float a, float b) {
	float carp;
	carp = a * b;
	return (carp);
}