//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
#include <stdio.h>
#include <stdlib.h>


int main() {
	float sayi1, sayi2, toplam=0, fark=0, carpim=1;

	printf("\t ******* Hesaplanacak Verilerin Girilmesi ******");
	printf("\n Klavyeden 1. Sayiyi giriniz: ");
	scanf_s("%f", &sayi1);
	printf("\n Klavyeden 2. Sayiyi giriniz: ");
	scanf_s("%f", &sayi2);
	
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carpim = sayi1*sayi2;

	printf(" \t****Islemlerin Sonucu****\n");
	printf("Sayilarin Toplami:%0.00f", toplam);
	printf("\nSayilarin Farki:%0.00f", fark);
	printf("\nSayilarin Carpimi:%0.00f", carpim);

	getchar();

	return 0;

}