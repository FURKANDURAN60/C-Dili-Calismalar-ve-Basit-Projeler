#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int us_karekok(int sayi1)
{
	int secim ;
	float sonuc ;
	printf("1- Us Alma\n2- Karekok Alma\n");
	printf("Yapmak Istediginiz Islem Numarasini Giriniz : ");
	git2 : scanf("%d",&secim);
	if(secim == 1 || secim ==2)
	{
		switch(secim)
		{
			case 1 : { int us ; printf("Us degeri giriniz : "); scanf("%d",&us); sonuc = pow(sayi1,us) ; break; } ;
			case 2 : { sonuc = sqrt(sayi1) ; break; }
		}
		printf("Sonucunuz : %.2f\n ",sonuc);
	}
	else
	{
		printf("Lutfen 1 ya da 2 Secimini Yapiniz"); goto git2 ; 
	}
}
	
	
int dort_islem(int sayi1 , int sayi2)
{
	int secim ;
	float sonuc;
	printf("1- Toplama\n2- Cikarma\n3- Carpma\n4- Bolme\n");

	printf("Yapmak Istediginiz Islemi Seciniz : ");
	git1 : scanf("%d",&secim);
	
	if(secim>=1 || secim<=4)
	{
		switch(secim)
		{
			case 1 : 	{ sonuc = sayi1 + sayi2 ; break; } ; 
			case 2 : 	{ sonuc = sayi1 - sayi2 ; break; } ; 
			case 3 : 	{ sonuc = sayi1 * sayi2 ; break; } ; 
			case 4 : 	{ sonuc = sayi1 / sayi2 ; break; } ;
		}
		printf("Sonucunuz : %.2f\n",sonuc);
	}
	else
	{
		printf("Lütfen 1-4 Arasi Secim Yapin : "); goto git1 ;  
	}
	return sonuc ; 
}
  int main() 
  {
  		int secim ;
	printf("***************MATEMATIK ISLEM PROGRAMI***************\n\n");
	printf("1-Dort Islem\n");
	printf("2-Us ve Karekok Alma\n");
	
	printf("Seciminiz : "); 
	git3 : scanf("%d",&secim); 
	
	if(secim==1 || secim==2)
	{
		switch(secim)
		{
			case 1 : 
			{
				int sayi1 , sayi2 ; 
				printf("Dort Islem Yapmak Istediginiz 1.Sayiyi Giriniz : "); scanf("%d",&sayi1);
				printf("Dort Islem Yapmak Istediginiz 2.Sayiyi Giriniz : "); scanf("%d",&sayi2);
				dort_islem( sayi1 , sayi2);
			}
			case 2 :
			{
				int sayi1 , sayi2 ; 
				printf("Us veya Karekok Almak Istediginiz Sayiyi Giriniz : "); scanf("%d",&sayi1);
				us_karekok(sayi1) ; 	
			}
			default : printf("Lutfen 1 veya 2 Tuslarina Basiniz : "); goto git3 ; 
			
		}
	}
	
  	
	// SWITCH ÝLE AY NUMARASI VERÝLEN AYI BULMA 
	/*
	int ay;
	
	deneme : printf("\nLutfen Bir Ay Numarasi Giriniz : ");
	scanf("%d",&ay);
	
	switch(ay)
	{
		case 1  : printf("Ocak");    break;
		case 2  : printf("Subat");   break;
		case 3  : printf("Mart");    break;
		case 4  : printf("Nisan");   break;
		case 5  : printf("Mayis");   break;
 		case 6  : printf("Haziran"); break;
		case 7  : printf("Temmuz");  break;
		case 8  : printf("Agustos"); break;
		case 9  : printf("Eylul");	 break;
		case 10 : printf("Ekim");	 break;
		case 11 : printf("Kasim");	 break;
		case 12 : printf("Aralik");	 break;
		default : printf("Lutfen 1-12 arasi numara girisi yapiniz.\a\a\a");
		goto deneme ; 
		
	}
	
	/*
	char ders;
	
	printf("Ders Kodunu Giriniz : ");
	scanf("%s",&ders);
	
	switch(ders)
	{
		case 't': printf("Turkce"); break;
		case 'm': printf("Matemetik"); break;
		case 'f': printf("Fen Bilgisi"); break;
		case 's': printf("Sosyal Bilgiler"); break;
		
		default : printf("-t , -m , -f , -s Haricinde Harf Girisi Yapmayiniz...");
	}
	*/
	/*
	int gun;
	
	printf("Lutfen Bir Gun Sayisi Giriniz : ");
	scanf("%d",&gun);
	
	switch(gun)
	{
		case 1  : printf("Pazartesi");break;
		case 2  : printf("Sali");break;
		case 3  : printf("Carsamba");break;
		case 4  : printf("Persembe");break;
		case 5  : printf("Cuma");break;
 		case 6  : printf("Cumartesi");break;
		case 7  : printf("Pazar");break;
		
		default : printf("Lutfen 1-7 Arasi Numara Girisi Yapiniz.");
		
	}
	}
	*/
	
	// *************************************  BURADA ÝNT VE CHAR LARI ÝNT MAÝN DIÞINDA ALMAMIZ LAZIM  YOKSA DÜZGÜN ÇALIÞMIYOR************************************
	// BU KODU ÇALIÞTIRMAK ÝÇÝN GÝT 6 KAPA --     73-107 AÇ **************
	
	/*
	int sayi1,sayi2,sonuc;
	char islem;
	
	
	
	
	int main()
	{

	printf("Bir Sayi Giriniz : ");
	scanf("%d",&sayi1);
	printf("Ikinci Sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("Lutfen Islem Birimini Seciniz : ");
	scanf("%s",&islem);
	
	switch(islem)
	{
		case '+' : 
			sonuc=sayi1+sayi2 ; 
				printf("Sonucunuz : %d",sonuc); break;
		case '-' : 
			sonuc=sayi1-sayi2 ; 
				printf("Sonucunuz : %d",sonuc); break;
		case '*' : 
			sonuc=sayi1*sayi2 ; 	
				printf("Sonucunuz : %d",sonuc); break;
		case '/' : 
			sonuc=sayi1/sayi2 ; 
				printf("Sonucunuz : %d",sonuc); break;
	}
	
*/

	
	


}


