#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/*
	int kenar,alan,cevre;
	kenar=8;
	alan=kenar*kenar;
	cevre=kenar*4;
	printf("Karenin Alani :%d\n",alan);
	printf("Karenin Cevresi :%d",cevre);
	
	
	int kisa,uzun,alan,cevre;
	kisa=8;
	uzun=12;
	alan=kisa*uzun;
	cevre=2*(kisa+uzun);
	printf("Dikdortgenin Alani : %d\n",alan);
	printf("Dikdortgenin Cevresi : %d",cevre);
	
	
	
	//BÝRÝNCÝ ÖDEV DERS3
	 int a,alan,cevre;
	 	
		a=5;
		alan=(pow(a,2)*sqrt(3))/4;
		cevre=a*3;
		printf("Ucgenin Cevresi : %d\n",cevre);
		printf("UCgenin Alani : %d\n",alan);
		printf("*****VERILEN UCGENÝN OZELLIKLERI*****\n\n\n\n");
		
	*/	
	//ÝKÝNCÝ ÖDEV DERS3
	/* 
	 int sinav1,sinav2,sinav3,proje,ortalama;
	 sinav1=90;
	 sinav2=50;
	 sinav3=90;
	 proje=70;
	 ortalama=(sinav1+sinav2+sinav3+proje)/4;
	 printf("------OGRENCININ ORTALAMASI------\n\n");
	 printf("------          %d         ------",ortalama);
	 
	 */
	 
	 //ÜÇÜNCÜ ÖDEV DERS 3
	 
	int bagaj,elbagaji,fazlalik1,fazlalik2,fazlaliktop,ucret;
	printf("Maksimum Bagaj Kapsitesi : 15kg\n");
	printf("Maksimum El Bagaji Kapasitesi : 8kg\n");
	
	printf("Bagaj Kilograminiz : ");
	scanf("%d",&bagaj);
	printf("El Bagaji Kilograminiz : ");
	scanf("%d",&elbagaji);
	fazlalik1=bagaj-15;
	fazlalik2=elbagaji-8;
	fazlaliktop=fazlalik1+fazlalik2;
	printf("Toplam Fazlalik Kilogram : %d\n\n",fazlaliktop);
	ucret=fazlaliktop*5;
	printf("-----VERILMESI GEREKEN UCRET-----\n");
	printf("               %d",ucret);	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
 
 
 	
	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	
	
	
	
	
	return 0;
}
