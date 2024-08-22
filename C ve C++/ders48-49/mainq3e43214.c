#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define yaz printf

void maximum_bul(int sayi_dizisi[] , int boyut) // HOW TO USE DÝZÝ WHERE ÝN FONCTIONS
{
		int i , max = 0 ; 
		for( i = 0 ; i<boyut ; i++ )
		{
			yaz("%d. deger : ", i+1); 
			scanf("%d",&sayi_dizisi[i]);
			
			if(sayi_dizisi[i]>max)
			{
				max=sayi_dizisi[i] ; 
			}
		}
		yaz("Maksimum deger  : %d\n",max);
}
void min_bul(int min_dizisi[] , int boyut)
{
	int i , max = 999999 ; 
	
	for(i=0 ; i<boyut ; i++)
	{
		printf("%d. deger : ", i+1 ); scanf("%d",&min_dizisi[i]);
		
		if(min_dizisi[i]<max)
		{
			max = min_dizisi[i] ; 
		}
	}
	printf("En Kucuk Deger : %d",max);
}
int main() 
{
	char a[100]  ; 
	printf("kelime gir  :"); 
	scanf("%s",a);
	int i ; 
	for(i=0 ; i<strlen(a) ; i++)
	{
		 
		printf("%c",a[i] -32);
	}
	printf("\n");
	// SESLÝ HARFLERÝN ASCII KODUNU YAZAN DÝÐERLERÝNÝ OLDUÐU GÝBÝ YAZDIRAN PROGRAMME
	char kelime[25] ; 
	char seslih[]={'a','e','i','o','u'} ; 
	int j ; 
	printf("Bir Kelime Giriniz : "); 
	scanf("%s",kelime);
	
	for(i=0 ; i<strlen(kelime) ; i++)
	{
		for(j=0 ; j<strlen(seslih) ; j++)
		{
			if(kelime[i] == seslih[j])
			{
				printf("%d",kelime[i]) ; break ; 
			}
	
		}
		if(kelime[i] !=seslih[j]) 
		printf("%c",kelime[i]); 
	}
	
	printf("\n");
	int sayi_dizisi[5] ; 
	int min_dizi[10] ; 
	maximum_bul(sayi_dizisi , 5 ) ; 
	min_bul(min_dizi , 10) ; 
	
	return 0;
}
