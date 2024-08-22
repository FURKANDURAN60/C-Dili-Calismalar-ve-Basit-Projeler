#include <stdio.h>
#include <stdlib.h>
/* Birinci Ornek**
void max_bul(int sayilar[] , int dizi_boyutu)
{
	
	int max , i ; 
	printf("Dizinin Elemanlarini Giriniz :\n");
	for( i = 0 ; i< dizi_boyutu ; i ++)
	{
		printf("%d. Eleman :  ",i+1); scanf("%d",&sayilar[i]) ;
		max = 0 ;
		if(sayilar[i] > max)
		{
			max = sayilar[i] ; 	
		}
	}
	printf("Girdiginiz Dizinin En Buyuk Degeri  : %d",max) ; 
}

*/
void not_okuma_fonksiyonu(int not_oku[] , int boyut )
{
	
	int i ;
	for( i = 0 ; i < boyut ; i ++ )
	{
		printf("%d. Ogrencinin Notu : ",i+1); scanf("%d",&not_oku[i]);
	}
	printf("\n\n");
	for( i = 0 ; i < boyut ; i ++ )
	{
		printf("%d. Ogrencinin Notu : %d\n",i+1,not_oku[i]);
	}
}




int main() 
{	/* Birinci Ornek
	int main_dizisi[0] ; 
	int boyut ;
	printf("Dizide Bulunmasini Istediginiz Eleman Sayisini Giriniz : "); scanf("%d",&boyut);
	max_bul(main_dizisi,boyut);
	*/
	int not_dizisi[0] , boyutu; 
	printf("Kac Ogrencinin Not okuma Islemi Gerceklestirilecek : "); scanf("%d",&boyutu);
	not_okuma_fonksiyonu(not_dizisi,boyutu) ; 
	
	return 0;
}
