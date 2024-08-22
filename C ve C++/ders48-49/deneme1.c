#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void sayisal_loto() /****** De�er D�nd�rmeyen  PARAMETRES�Z fonksiyon*******/
{
	int i , j , a ; 
	srand(time(NULL)) ;
	for(  i = 1 ; i<=6 ; i++)
	{
		printf("%d . Kolon : ",i ) ;
		 
		for(  j = 1 ; j<=6 ; j++)
		{
			 
			a = 1+rand()%45 ;
			if( a < 10)
				{
					printf(" 0%d ",a );
				}
			else
			{
					printf(" %d ",a );
			}	
	
		}
		printf("\n") ;
	}
}

void not_hesapla(int vize , int final)    /****** De�er D�nd�rmeyen PARAMET'L�' fonksiyon*******/
{
	double ort= (double)vize*0.4 + (double)final*0.6 ; 
	printf("Ortalama : %.2lf\n",ort);
	
}

void not_hesaplama_deger_alma()  /******* Main ��inde De�er D�nd�rmeyen PARAMET'L�' fonksiyon i�in Scanf Almamak i�in a��lm�� fonk.*/                         
{
	int vize , final ;
	printf("Vize Notunuzu Giriniz : "); scanf("%d",&vize);
	printf("Final Notunuzu Giriniz : "); scanf("%d",&final);
	not_hesapla( vize , final ) ;
}

int topla() /****** De�er D�nd�ren  PARAMETRES�Z fonksiyon *******/
{
	int sayi1 ,sayi2, toplam;
	printf("Toplamak Istediginiz 1. Sayiyi Giriniz : ");
	scanf("%d",&sayi1);
	printf("Toplamak Istediginiz 2. Sayiyi Giriniz : ");
	scanf("%d",&sayi2);
	
	toplam= sayi1 + sayi2 ; 
	
	printf("Toplamak Istediginiz 2 Sayiyin Toplami : %d\n",toplam);	 
}
int carpim(int sayi1 , int sayi2) /****** De�er D�nd�ren  PARAMETREL�  fonksiyon *******/
{
	int carp = sayi1*sayi2 ; 
	printf("Girilen 2 sayinin Carpimi : %d\n",carp);
	return sayi1*sayi2 ;    /* ya da ----->return carp ;    */  
}
int carpim_deger_alma() /******* Main ��inde De�er D�nd�ren PARAMET'L�' fonksiyon i�in Scanf Almamak i�in a��lm�� fonk.*/
{
	int sayi1 , sayi2 ;  /* Farkl� De�i�kenler de Atanabilir. int a , b ;  gibi */  
	
	printf("Carpmak Istediginiz 1. Sayiyi Giriniz : ");
	scanf("%d",&sayi1);
	printf("Carpmak Istediginiz 2. Sayiyi Giriniz : ");
	scanf("%d",&sayi2); 
	carpim(sayi1 , sayi2) ;
}
int topla_DONDURME_MUHABBETI_WITHOUT_PRINTF(int sayi1 , int sayi2)
{
	return sayi1*sayi2 ; 
}
int main() 
{
	sayisal_loto() ; 
	not_hesaplama_deger_alma() ;
	topla() ; 
	carpim_deger_alma() ; 
	printf("RETURN KULLANARAK TOPLAMA SONUC : %d\n",topla_DONDURME_MUHABBETI_WITHOUT_PRINTF( 10 , 10 )) ; // burada iste�e ba�la main i�erisinde ki scanfle alinan degerler kullan�labilir
}
