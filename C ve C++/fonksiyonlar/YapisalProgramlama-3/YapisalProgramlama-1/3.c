//Suleyman UZUN
//Yapısal Programlama - Hesap Makinesi
// ******* Bir oncekinden Farklar *******
//islemlerin Fonksiyon olarak Yapilmasi
#include <stdio.h>
#include <stdlib.h>

float topla(float x, float y);
float cikar(float a, float b);
float carpma(float a, float b);
void yazdir(int sayi1, int sayi2, int sayi3);
void bilgi();
int karehesap();
float sayigirisi1();
float sayigirisi2();


float main() 
{
	float sayi1, sayi2;
	float toplam = 0, fark = 0, carpim = 0;

	sayi1 = sayigirisi1();
	sayi2 = sayigirisi2();


	toplam = topla(sayi1, sayi2);
	fark = cikar(sayi1, sayi2);
	carpim = carpma(sayi1, sayi2);

	bilgi();
	//printf(" \t****Islemlerin Sonucu****\n");
	/*printf("Sayilarin Toplami:%0.00f", toplam);
	printf("\nSayilarin Farki:%0.00f", fark);
	printf("\nSayilarin Carpimi:%0.00f", carpim);*/
	yazdir(toplam, fark, carpim);
	printf("\n \t ******* Sayfayi Kapatmak icin Herhangi Bir Tusa Basiniz ******\n");
	int karealan = karehesap();
	printf("Karenin alani=%d\n",karealan);

	getchar();
	getchar();
	return 0;
	

}

float sayigirisi1() {
	float x;
	printf("\t ******* Hesaplanacak Verilerin Girilmesi ******");
	printf("\n Klavyeden 1. Sayiyi giriniz: ");
	scanf("%f", &x);
	return x;
}
float sayigirisi2() {
	float y;
	printf("\n Klavyeden 2. Sayiyi giriniz: ");
	scanf("%f", &y);
	return y;
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

void yazdir(int sayi1, int sayi2, int sayi3) {
	printf("Toplam:%d\n", sayi1);
	printf("Fark:%d\n", sayi2);
	printf("Carpim:%d\n", sayi3);
}

void bilgi() {
	printf("\t * ***Islemlerin Sonucu * ***\n");
}

int karehesap() {
	int kare;
	printf("Karenin Bir Kenarini giriniz:\n");
	scanf("%d", &kare);

	return(kare*kare);
}