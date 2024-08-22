//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
// ******* Bir oncekinden Farklar *******
//Hesaplama isleri Ekrana Yazdirma isi icerisinde yaziliyor
//tek satirda veri girisi
#include <stdio.h>
#include <stdlib.h>


int main() {
	float sayi1, sayi2, toplam=0, fark=0, carpim=1;

	printf("\t ******* Hesaplanacak Verilerin Girilmesi ******");
	printf("\n Klavyeden 1. ve 2. Sayilari giriniz: ");
	scanf("%f %f", &sayi1, &sayi2);
	

	printf(" \t****Islemlerin Sonucu****\n");
	printf("Sayilarin Toplami:%0.00f", sayi1 + sayi2);
	printf("\nSayilarin Toplami:%0.00f", sayi1 - sayi2);
	printf("\nSayilarin Toplami:%0.00f", sayi1*sayi2);

	printf("\n \t ******* Sayfayi Kapatmak icin Herhangi Bir Tusa Basiniz ******\n");

	getchar();
	getchar();
	return 0;
	

}